#include<bits/stdc++.h>
using namespace std;
class binaryTreeNode{
    public:
    char data;
    binaryTreeNode* left;
    binaryTreeNode* right;
    binaryTreeNode(char ch){
        data = ch;
        left = NULL;
        right = NULL;
    }
};
int precedence(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
string Postfix(string s)
{

    stack<char> st; 
    string result;

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;
        else if (c == '(')
            st.push('(');
        else if (c == ')')
        {
            while (st.top() != '(')
            {
                result += st.top();
                st.pop();
            }
            st.pop();
        }

        else
        {
            while (!st.empty() && precedence(s[i]) <= precedence(st.top()))
            {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }

    return result;
}
bool isOperator(char ch){
    if(ch == '+'|| ch == '-' || ch == '*' || ch == '/' || ch =='^')
       return true;
    else
       return false; 
}
void inOrder(binaryTreeNode* root){
    if(root != NULL){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}
pair<int,int> returnXY(binaryTreeNode* root,binaryTreeNode* node){
    if(node==NULL){
        pair<int,int> result(-1,-1);
        return result;
    }
    if(node==root){
        pair<int,int> result(24,0);
        return result;
    }
    if(node==root->left){
        pair<int,int> result(23,1);
        return result;
    }
    if(node==root->right){
        pair<int, int> result(25, 1);
        return result;
    }
    pair<int,int> finalLeft = returnXY(root->left,node);
    if(finalLeft.first!=-1 && finalLeft.second!=-1){
        pair<int,int> result(finalLeft.first-1,1+finalLeft.second);
        return result;
    }
    pair<int,int> finalRight = returnXY(root->right,node);
    pair<int, int> result(finalLeft.first+1, 1 + finalLeft.second);
    return result;
}
void preOrder(binaryTreeNode *curr, binaryTreeNode *root,char str[][50])
{
    if (curr != NULL)
    {
        pair<int, int> result = returnXY(root, curr);
        str[result.second][result.first] = curr->data;
        preOrder(curr->left, root, str);
        preOrder(curr->right, root, str);
    }
}
binaryTreeNode *constructTree(string postfix)
{
    stack<binaryTreeNode*> st;
    binaryTreeNode *t, *t1, *t2;
    for (int i = 0; i < postfix.size(); i++)
    {
       
        if (!isOperator(postfix[i]))
        {
            t = new binaryTreeNode(postfix[i]);
            st.push(t);
        }
        else 
        {
            t = new binaryTreeNode(postfix[i]);
            t1 = st.top(); 
            st.pop();     
            t2 = st.top();
            st.pop();
            t->right = t1;
            t->left = t2;
            st.push(t);
        }
    }
    t = st.top();
    st.pop();

    return t;
}

int main(){
    string s;
    getline(cin, s);
    binaryTreeNode* root = NULL;
    s = Postfix(s);
    root = constructTree(s);
    char arr[50][50];
    for(int i=0; i<50; i++){
        for(int j=0; j<50; j++){
            arr[i][j] = ' ';
        }
    }
    preOrder(root, root, arr);
    cout<<endl;
     for(int i=0; i<50; i++){
        for(int j=0; j<50; j++){
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }
}