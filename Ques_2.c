#include<stdio.h>
#include<stdlib.h>

void merge(int *a, int l, int mid, int u)
{
    int i, j, k;
    int n1 = mid - l + 1;
    int n2 = u - mid;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (j = 0; j < n2; j++)
        R[j] = a[mid + 1 + j];
 
    i = 0; 
    j = 0; 
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] >= R[j]) {
            a[k] = L[i];
            i++;
        }
        else {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int *a, int l, int u)
{
    if (l < u) {

        int mid = l + (u - l) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, u);
        merge(a, l, mid, u);
    }
}

int main() {
    int *arr_1,*arr_2;
    int n;
    printf("Enter the number of elements in the array 1 : ");  //use to test merge.
    scanf("%d",&n);
    arr_1 = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
    scanf("%d",&arr_1[i]);
    int m;
    printf("Enter the number of elements in the array 2 : ");    //use to test mergesort.
    scanf("%d",&m);
    arr_2 = (int*)malloc(m*sizeof(int));
    for(int i=0; i<m; i++)
    scanf("%d",&arr_2[i]);
    merge(arr_1,0,4,8);
    mergeSort(arr_2,0,n-1);
    for(int i=0; i<n; i++)
    printf("%d   ",arr_1[i]);
    printf("\n");
    for(int i=0; i<m; i++)
    printf("%d   ",arr_2[i]);
    return 0;
}
    

 