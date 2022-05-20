#include<stdio.h>
#include<stdlib.h>
float * readPoint(int n){
  float arr[n];
  for(int i=0; i<n; i++)
    scanf("%f",&arr[i]);
    return arr;
}
int checkLine(float P[2],float Q[2], float R[2]){
  float slope1 = (Q[1]-P[1])/(Q[0]-P[0]);
  float slope2 = (R[1]-Q[1])/(R[0]-Q[0]);
  if(slope1==slope2)
  return 1;
  else
  return 0;
}
float eDistance(float P[],float Q[], int n){
  float sum=0;
  for(int i=0; i<n; i++){
    sum+=pow(Q[i]-P[i],2);
  }
  return sqrt(sum);
}

int main(){
  float arr[2];
  arr=readPoint(2);
  float brr[2];
  brr=readPoint(2);
  float crr[2];
  crr=readPoint(2);
  if(checkLine(arr,brr,crr))
  printf(" Points are Collinear");
  else
  printf(" Points are not Collinear");
  printf("\n Distance between arr and brr is : %f",eDistance(arr,brr));
  return 0;
}
