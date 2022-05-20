#include<bits/stdc++.h>
#include <unistd.h>
#include <sys/types.h>  
#include <sys/wait.h>
using namespace std;

//This is a function that will show the greeting message to the user
void greetUser(){
    char greet[10][70];
    for(int i=0; i<10; i++){
        for(int j=0; j<70; j++){
            //code for letter 'W'
            if(j==0 || j==9)
                greet[i][j] = '#';
            else if(i+j==10 && i>5)
                greet[i][j] = '#';
            else if((j>4 && i>5) && (i==j+1))
                greet[i][j] = '#';
            else
                greet[i][j] = ' ';
            //code for letter 'E'
            if(j==11)
                greet[i][j] = '#';
            if((i==0 || i==5 || i==9 )&& (j>10 && j<20))
                greet[i][j] = '#';
            //code for letter 'L'
            if(j==21 || (i==9 && j>21 && j<30))
                greet[i][j] = '#';
            //code for letter 'C'
            if(j==31 || ((i==0 || i==9)&&(j>31 && j<40)))
                greet[i][j] = '#';
            //code for letter 'O'
            if((j==41 || j==49) || ((i==0 || i==9)&&(j>41 && j<50)))
                greet[i][j] = '#';
            //code for letter 'M'
             if(j==51 || j==59)
                greet[i][j] = '#';
             else if (i + j == 59 && i < 5)
                 greet[i][j] = '#';
             else if ((j  <55 && i < 5) && (i+51 == j ))
                 greet[i][j] = '#';
            //code for letter 'E'
             if (j == 61)
                 greet[i][j] = '#';
             if ((i == 0 || i == 5 || i == 9) && (j > 60 && j < 70))
                 greet[i][j] = '#';
        }
    }
    cout<<"\n\n-------------------------------------------------------------------------------------------------------------------------------------------------\n\n";
    for(int i=0; i<10; i++){
        for(int j=0; j<70; j++){
            cout<<" "<<greet[i][j];
        }
        cout<<"\n";
    }
    cout<<"\n---------------------------------------------------------------- To Our Mini Shell-----------------------------------------------------------------\n\n";
}
//This function is used to print the current working directory
void printDirectory(){
    char currentDir[512];
    getcwd(currentDir,sizeof(currentDir));   //asking the system to provide the current working directory
    cout<<"Dir : "<<currentDir<<endl;
}
//This function is used to get the ENVIRONMENT variables 
void executeEnvVariable(const string &variable){
    char *str = new char[20];
    for(int i=0; i<variable.size(); i++)
      str[i] = variable[i];
    char *varCollected = getenv(str);  //a function that returns the environment value corresponding to the key provided
    cout<<varCollected<<"\n";
    delete []str;
}
void simpleCommandExecution(char **parsed)  // to execute the system commands with no piping, no redirection, etc. i.e. only simple commands
{
    // Forking a child
    pid_t pid = fork();  //-1,1,0
    //
    if (pid == -1){
        cout<<"\nFailed forking child..";
        return;
    }
    else if (pid == 0){  //child is created..
        if (execvp(parsed[0], parsed) < 0){ //system commands
            cout<<"\nCould not execute command.."; 
        }
        exit(0); //program finish here
    }
    else{
        // waiting for child to terminate
        wait(NULL);
        return;
    }
}

//A function that is used to execute the commands having PIPE
void executePipedCommand(char **beforePipe, char **afterPipe){    
    // 0 is read end, 1 is write end
    int pipefd[2];  
    pid_t p1, p2; 
    if (pipe(pipefd) < 0){
        cout<<"\nPipe could not be accomplished";
        return;
    }
    p1 = fork();
    if (p1 < 0){
        cout<<"\nCould not fork";
        return;
    }

    if (p1 == 0){
        // Child 1 executing..
        // It only needs to write at the write end
        close(pipefd[0]);
        dup2(pipefd[1], STDOUT_FILENO);
        close(pipefd[1]);
        if (execvp(beforePipe[0], beforePipe) < 0){
            printf("\nCould not execute command 1..");
            exit(0);
        }
    }
    else{
        // Parent executing
        p2 = fork();
        if (p2 < 0){
            cout<<"\nCould not fork";
            return;
        }

        // Child 2 executing..
        // It only needs to read at the read end
        if (p2 == 0){
            close(pipefd[1]);
            dup2(pipefd[0], STDIN_FILENO);
            close(pipefd[0]);
            if (execvp(afterPipe[0], afterPipe) < 0)
            {
                printf("\nCould not execute command 2..");
                exit(0);
            }
        }
        else
        {
            // parent executing, waiting for two children
            wait(NULL);
            wait(NULL);
        }
    }
}
//Function to parse the string based on space
void parseSpace(char *inputString, char **parsed) {
    for (int i = 0; i < 100; i++){
        parsed[i] = strsep(&inputString, " ");  // a seperator function
        if (parsed[i] == NULL)
            break;
        if (strlen(parsed[i]) == 0)  
            i--;  // to avoid multiple space between the strings
    }
}
int main(){
    greetUser();  //The function that is used to greet the user whenever he/she starts the shell
    string envVariables[4];  //arrray of string to store the environment variables
    envVariables[0] = "USER";
    envVariables[1] = "HOME";
    envVariables[2] = "SHELL";
    envVariables[3] = "TERM";
    ofstream history;
    history.open("history.txt");  //opening a file in  write mode to store the history 
    while(true){
         string inputString ;  //a string to take the input taken from the user
         int flagForExecution = 0;
        printDirectory();   //function called here to print the current directory
        cout<<">>> ";
        getline(cin,inputString);   //taking input from the user
        if(inputString.size()==0)  //if size of the input is ZERO then we will not do anything but asks user to enter the iput
        continue;
        if(inputString=="exit" || inputString=="quit" || inputString=="x"){
                remove("history.txt");  //function to remove the history file
                history<<inputString<<endl;  //writing the current input as history into the file
                cout<<"Bye :(\n";
                exit(0);  ///ending the program here only.
        }
        for(int i=0; i<4; i++){
            if(envVariables[i]==inputString){
                executeEnvVariable(envVariables[i]);  // a function to execute the given ENVIRONMENT variable
                history<<inputString<<endl;  //writing the current input as history into the file
                flagForExecution = 1;
                break;
            }
        }
        if(flagForExecution==1)
        continue;      // if flagForExecution has a value of 1 that means the above algorithm has functioned well so we will start the loop again

        if(inputString=="cd" || inputString=="cd "){
            char *str = getenv("HOME");
            chdir(str);   //changing the directory to home 
            history<<inputString<<endl;  //writing the current input as history into the file
            continue;
        }
          
        char strNew[512];
        for(int i=0; i<inputString.size(); i++)
        strNew[i] = inputString[i];     //converting from string data type to simple C like arrays
        char *strSpaced[2];     //this array is going to stored the two strings seperated by a space
        parseSpace(strNew,strSpaced);   //function to parse the string based on space and converting into two strings.
        if(strcmp(strSpaced[0],"cd")==0){
            chdir(strSpaced[1]);   //function to change the directory to provided location
            history<<inputString<<endl;
            continue;
        }
     
        if(inputString == "history"){
            inputString = "cat history.txt";  //changing the content of the input string
            history<<inputString<<endl;
            continue;
        }

        char strNewPipe[1024];
        for(int i=0; i<inputString.size(); i++)
            strNewPipe[i] = inputString[i];
        char *ptr =strNewPipe;
        char *strPiped[2];    //array that is going to store the two pipe seperated comands
        for (int i = 0; i < 10; i++){
            strPiped[i] = strsep(&ptr, "|");  //seperator with respect to the pipe
            if (strPiped[i] == NULL)
            break;
        }
        if(strPiped[1]!=NULL){
            char *beforePipe[2], *afterPipe[2];     //two arrays of string that will store the space seperated string from the pipe seperated commands
            parseSpace(strPiped[0],beforePipe);      //parsing based on the space
            parseSpace(strPiped[1],afterPipe);     //space parsing
            executePipedCommand(beforePipe,afterPipe);    ///function to execute both the pipe seperated commands
            history<<inputString<<endl;
            continue;
        }

        //in the similar fashion as for pipe we seperated with respect to the > operator
        char strNewOutput[1024];
        for(int i=0; i<inputString.size(); i++)
            strNewOutput[i] = inputString[i];
        char *newPtr = strNewOutput;
        char *strOutput[2];
        for (int i = 0; i < 10; i++){
            strOutput[i] = strsep(&newPtr, ">");  //seperator
            if (strOutput[i] == NULL)
            break;
        }
        if(strOutput[1]!=NULL){
            char *Output[2];
            parseSpace(strOutput[0],Output);
            freopen(strOutput[1],"w",stdout);   ///changing the output mode from stdout to the file mode
            simpleCommandExecution(Output);   //now executing the command
            history<<inputString<<endl;;
            continue;
        }

       //in the similar fashion we take care of the input redirection process
        char strNewInput[1024];
        for(int i=0; i<inputString.size(); i++)
            strNewInput[i] = inputString[i];
        char *nextPtr = strNewInput;
        char *strInput[2];
        for (int i = 0; i < 10; i++){
            strInput[i] = strsep(&nextPtr, "<");  //seperator
            if (strInput[i] == NULL)
            break;
        }
        if(strInput[1]!=NULL){
            char *Input[2];
            parseSpace(strInput[0],Input);
            freopen(strInput[1],"r",stdout);  //changing the default input streamto the file input
            simpleCommandExecution(Input);  //and then executng the commands
            history<<inputString<<endl;;
            continue;
        }

       //in the similar fashion we take care of appending to the file
        char strNewAppend[1024];
        for(int i=0; i<inputString.size(); i++)
            strNewAppend[i] = inputString[i];
        char *lastPtr = strNewAppend;
        char *strAppend[2];
        for (int i = 0; i < 10; i++){
            strAppend[i] = strsep(&lastPtr, ">>");  //seperator with respect to the >> operator
            if (strAppend[i] == NULL)
            break;
        }
        if(strInput[1]!=NULL){
            char *Append[2];
            parseSpace(strAppend[0],Append);
            freopen(strAppend[1],"a",stdout);  //changing the default output stream to the file in append mode
            simpleCommandExecution(Append);    //executing the commands
            history<<inputString<<endl;;
            continue;
        }
        //taking care of all other commands that are not mentioned above
        char strRestCommand[1024];
        for(int i=0; i<inputString.size(); i++)
            strRestCommand[i] = inputString[i];
        if(strlen(strRestCommand)){
            char *rest[2];
            parseSpace(strRestCommand,rest);
            simpleCommandExecution(rest); //execution of rest command
            history<<inputString<<endl;;
            continue;
        }
        if(inputString=="clear"){
            cout<<"\033[H\033[J";
            continue;
        }     
    }
    return 0;
}
