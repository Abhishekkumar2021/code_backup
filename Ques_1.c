#include<stdio.h>
#include<stdlib.h>

void sort_arr(int *array, int n){
 for (int c = 0 ; c < n - 1; c++)
  {
    for (int d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use '<' instead of '>' */
      {
        int temp   = array[d];
        array[d]   = array[d+1];
        array[d+1] = temp;
      }
    }
  }
}

int main() {
    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int *arr;
    arr = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
    scanf("%d",&arr[i]);
    int odd=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2!=0){
            int temp = arr[i];
            arr[i] = arr[odd];
            arr[odd] = temp;
            odd++;
        }
    }
    
    int *odd_arr, *even_arr;
    odd_arr = (int*)malloc(odd*sizeof(int));
    even_arr = (int*)malloc((n-odd)*sizeof(int));
    for(int i=0; i<odd; i++)
    odd_arr[i] = arr[i];
    for(int i=odd; i<n; i++)
    even_arr[i-odd] = arr[i];
    sort_arr(odd_arr,odd);
    sort_arr(even_arr,n-odd);
    for(int i=0; i<n; i++){
        if(i<odd)
        arr[i] = odd_arr[i];
        else
        arr[i] = even_arr[i-odd];
     }
     for(int i=0; i<n; i++)
    printf("%d   ",arr[i]);

}