#include<stdio.h>
#include<stdlib.h>
struct student{
	int serial_number;
	int roll_number;
	char *student_name ;
	char *course_id ;
	char *course_name;

};

int main(){
	 freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	int n;                                   //number of students.
	scanf("%d",&n);
	struct student stu;
	for(int i=0; i<n; i++){
		stu.student_name = (char*)calloc(100,sizeof(char));
		stu.course_id = (char*)calloc(6,sizeof(char));
		stu.course_name = (char*)calloc(100,sizeof(char));
	}
    printf("ROLL NUMBER         STUDENT NAME                  COURSE ID\n");
    for( int i=0; i<n; i++){
       scanf("%d",&stu.serial_number);
       scanf("%d",&stu.roll_number);
       scanf("%[^,]%*c",stu.student_name);
       scanf("%[^,]%*c",stu.course_id);
       scanf("%[^\n]%*c",stu.course_name);
       int x=(stu.roll_number/1000)%100;
    	if(x==03){
    		printf("%-20d",stu.roll_number);
    		printf("%-30s",stu.student_name);
    		printf("%s\n",stu.course_id);
        }
    }
    return 0;
}


/*.....................OUTPUT...........................

ROLL NUMBER         STUDENT NAME                  COURSE ID
170103001            Aakash                       HS401
170103002            Abhishek                     HS401
170103003            Akash Sharma                 HS427
170103005            Amogh Singh Pathania         HS401
170103006            Ananya Manohar               HS427
170103007            Anirudh Pratap Singh         HS427
170103008            Anurag Kumar                 HS424
170103009            Arun Kumar                   HS401
170103011            Ashish Negi                  HS409
170103012            Ashish Ranjan                HS421
170103013            Ashit Shende                 HS401
170103017            Avinash Baro                 HS420
170103018            Ayush Kumar                  HS409
170103019            BHKUYA VENU NAIK             HS425
170103020            Brajesh Kumar                HS401
170103022            DHANIRAM TAW                 HS421
170103025            George Rahul Pulapaka        HS425
170103027            Hemanth Kumar Chinta         HS429
170103028            HITESH RAJ                   HS421
170103029            Hursh                        HS401
170103031            KATANA SRI AJAY              HS429
170103032            Sabhareesh M                 HS401
170103034            Milan Rayat                  HS409
170103035            Mohit Hasija                 HS401
170103036            MOHIT RAJA NENIWAL           HS415
170103037            MONJIT DOLEY                 HS421
170103038            Mriganav Bordoloi            HS409
170103039            Narendra Kumar               HS415
170103040            nikhil soni                  HS415
170103041            Nitesh Janghu                HS401
170103042            Nitesh kumar                 HS424
170103043            Nyati Aditya Atul            HS415
170103045            Prabhandam Suhas             HS409
170103047            Pratyush Singh               HS421
170103048            Raghav                       HS421
170103049            Rahul Katariya               HS421
170103050            Rahul Kushwaha               HS425
170103052            Rahul Raj                    HS409
170103053            Rajat                        HS409
170103054            Ramavarapu Achyut            HS415
170103057            Rohit Kumar                  HS409
170103058            Routhu Anil Kumar            HS415
170103059            Sadaival Singh               HS429
170103061            Satish Agrahari              HS424
170103062            Sayan Sarkar                 HS427
170103064            Shubham Salunke              HS425
170103065            Sparsh Dutta                 HS409
170103067            Sumit kumar saini            HS421
170103068            Supragya Shrestha            HS401
170103071            Swapnil Audichya             HS401
170103072            T Goutham Kumar Goud         HS425
170103073            Thota Sai Vaishnav           HS401
170103074            Tikeswar Naik                HS427
170103075            Tripan Dipta Roy             HS409
170103076            Vaibhav Singh                HS409
170103077            Vikas Maurya                 HS401
170103078            Vineet Singla                HS409
170103080            Yash Kumar                   HS409
170103081            Abhishek kumar gupta         HS427
170103082            Himanshu Keshari             HS401
170103083            kiran j chemmanatte          HS424
170103084            Kartik Gupta                 HS409
170103085            Kushagra Pandey              HS401
170103088            Prasun Gourav                HS401
170103090            Albin Benny                  HS409
170103091            Yashraj Vijay Molawade       HS401
170103092            Raut Prajwal Vishvanath      HS401
170103093            R Shreekavi                  HS425
170103094            KUNTAL NAYAK                 HS409
170103095            Hariom Singh                 HS427
190103002            Abhijeet Veer                HS135
190103003            ABHINAV RANJAN VERMA         HS138
190103004            Abhishek verma               HS113
190103005            Aishwarya Kamble             HS107
190103006            Akash Bidholiya              HS132
190103008            Akshita Bhatt                HS125
190103009            ALLEPU MADHAN MOHAN          HS134
190103010            Ampili Nuthan Hemanth Kumar  HS139
190103011            ANGOTHU RAJKUMAR             HS139
190103012            Ankit Singh Rawat            HS116
190103013            ANURAG KUMAR NIRAJ           HS132
190103014            Anurag meena                 HS125
190103015            Anurag Shrivastava           HS135
190103016            Anushka Anand                HS138
190103017            Arihant Singhi               HS125
190103018            ARNAV SAHU                   HS134
190103020            Atharva Shrawge              HS123
190103021            Atul Sharma                  HS125
190103022            Ayush Kumar                  HS113
190103023            Lovekesh Bajaj               HS116
190103024            Bathina satwika              HS136
190103025            Bharat Bhushan Rai           HS135
190103026            Bomburi kiran kumar          HS116
190103027            CHALAMARLA TEJASA            HS134
190103028            CHAMMANDI RAVI KIRAN         HS116
190103029            Chelly Vishal                HS139
190103030            Chetti Hari Chandra          HS139
190103031            DAIVALA SAI VIGNESH          HS136
190103032            Daksh Jain                   HS138
190103033            Deepesh Panwar               HS107
190103034            DHANAVATH BALAJI             HS139
190103035            Dheeraj Nahar                HS125
190103036            Durgansh Mishra              HS136
190103037            Franshu                      HS107
190103040            G.Rajaneesh                  HS136
190103043            Hrishikesh Boro              HS132
190103044            Ishu                         HS125
190103045            Kalsani Sanjana Reddy        HS136
190103046            Prathamesh Kanbaskar         HS123
190103047            Kancharla Varshith           HS123
190103048            Kapil                        HS136
190103049            Ketkee sabde                 HS113
190103050            Sanket Khairnar              HS138
190103052            Kudipudi Sree Rakhi          HS135
190103053            Kurakula Soumya              HS116
190103054            Madhav Dargar                HS135
190103055            Aisha ray                    HS134
190103056            Md shams reza                HS139
190103057            Miloni Patel                 HS138
190103058            Mohit Roshan                 HS138
190103059            Monika Poonia                HS136
190103060            Monu Kumar                   HS136
190103061            MRIDUL PRITHVI TEJ           HS136
190103062            Nikhil Kumar                 HS136
190103065            Parth Gadoo                  HS135
190103066            Ritu Nilkanth Patil          HS132
190103067            Pranav Garg                  HS132
190103069            Pratyanshu Raj Singh         HS136
190103070            Priyanshi Jain               HS114
190103071            Rahul Sabbarwal              HS107
190103073            Ramineni Renu Sri            HS139
190103074            Richa Kumari                 HS138
190103075            Ritesh Ranjan                HS116
190103076            RITIK SINGH                  HS136
190103077            RUPAVATH GANESH              HS139
190103078            Sahaj Sethi                  HS136
190103079            Sai Prasanth Kumar Molleti   HS113
190103080            Sai Sreyas Ray               HS136
190103081            Sama Chandrahas Goud         HS136
190103082            Sankalp Agrawal              HS125
190103083            Sanket                       HS135
190103084            Sanngesh PL                  HS114
190103086            Saranyaa.RT                  HS114
190103087            Sarthak Bhagwat              HS125
190103088            Sarthak Saxena               HS125
190103090            Shardul Shinde               HS116
190103091            Shrawan kumar meena          HS132
190103092            Shreya singh                 HS135
190103094            Shubham Panchal              HS136
190103095            Shyam sundar chauhan         HS134
190103096            Snigdh Chandra               HS134
190103097            Soham Karandikar             HS123
190103098            T Lhingminchong Haokip       HS139
190103099            Bhavesh Thengadi             HS136
190103101            Vanshaj wore                 HS132
190103102            Vedant Chourasia             HS135
190103104            vishal yadav                 HS123
190103105            Yash Joshi                   HS136
190103106            Praveen Raj S                HS114
190103107            Garvit Kaushik               HS135
190103108            Harsh Ajay Rana              HS138
190103109            ANKIT OJHA                   HS114
190103110            Gyanendra Prakash            HS123
190103111            Tushar Bajaj                 HS123
190103112            Romit Tiwari                 HS123
190103113            Vishwanathan Vivek S         HS138
190103114            Priyanshu Choudhary          HS138
190103115            Kunal Garg                   HS135
190103116            Nikhil Upadhyay              HS132
190103117            SHREY GUPTA                  HS135
190103118            Priyal Juneja                HS113
190103119            Shubham Mondal               HS125
190103120            Rahul Aggarwal               HS125
190103121            Vikash Nirwan                HS116
190103122            Varenya Tiwari               HS125
190103123            Kulkarni Venkatesh           HS114
190103124            Palak Kothari                HS123

*/