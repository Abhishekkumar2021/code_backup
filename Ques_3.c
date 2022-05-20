#include<stdio.h>
#include<stdlib.h>

int partition(int arr[],int low,int high){
int i, j, pivot, temp;
if(low<high){
pivot=low;
i=low;
j=high;
while(i<j){
while(arr[i]<=arr[pivot] && i<high)
i++;
while(arr[j]>arr[pivot])
j--;
if(i<j){
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
temp=arr[pivot];
arr[pivot]=arr[j];
arr[j]=temp;
partition(arr,low,j-1);
partition(arr,j+1,high);
}
return i-1;

}

float MEDIAN(int array[] , int n)
{
    float median=0;
    
    // if number of elements are even
    if(n%2 == 0)
        median = (array[(n-1)/2] + array[n/2])/2.0;
    // if number of elements are odd
    else
        median = array[n/2];
    
    return median;
}

int main() {
    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int *arr;
    arr = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
    scanf("%d",&arr[i]);
    int pivot = partition(arr,0,n-1);
    printf("Position of pivot before partition = 0\n");
    for(int i=0; i<n; i++)
    printf("%d   ",arr[i]);
    printf("Position of pivot after partition = %d\n",pivot);
    float median = MEDIAN(arr,n);
    printf("Median = %.2f",median);

}