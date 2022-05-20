#include <stdio.h>
#include <stdlib.h>

int ***reverseorder(int *ptr)
{
    int size = sizeof(ptr) / sizeof(ptr[0]);                   //getting the size of the array.
    int ***a = (int ***)calloc(ptr[size - 1], sizeof(int **)); //creating a triple pointer and dynamically allocating memory to it.
    for (int i = 0; i < ptr[size - 1]; i++)
    {
        a[i] = (int **)calloc(ptr[size - 3], sizeof(int *));
        for (int j = 0; j < ptr[size - 3]; j++)
        {
            a[i][j] = (int *)calloc(ptr[size - 2], sizeof(int));
        }
    }
    int x = size - 3;
    for (int i = 0; i < ptr[size - 1]; i++)
    {
        for (int j = 0; j < ptr[size - 3]; j++)
        {
            for (int k = 0; k < ptr[size - 2]; k++)
            {
                a[i][k][j] = ptr[x];
                x--;
            }
        }
    }
    return a;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int size;
    scanf("%d", &size);
    int *arr = (int *)calloc(size + 3, sizeof(int));
    for (int i = 0; i < size + 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ***newptr = reverseorder(arr);
    for (int i = 0; i < arr[size + 2]; i++)
    {
        for (int j = 0; j < arr[size]; j++)
        {
            for (int k = 0; k < arr[size + 1]; k++)
            {
                printf("%d ", newptr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    free(arr);
    for (int i = 0; i < arr[size + 2]; i++)
    {
        for (int j = 0; j < arr[size]; j++)
        {
            free(newptr[i][j]);
        }
        free(newptr[i]);
    }
    free(newptr);
}