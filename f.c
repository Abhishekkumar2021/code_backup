#include <stdio.h>
int r, c, arr[10];

void reverse(char a[r][c], int arr[10])
{
    char newArr[r][c];
    int m = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = arr[8] - 1; j < arr[9]; j++)
        {
            newArr[i][m] = a[i][j];
            m++;
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = arr[6] - 1; j < arr[7]; j++)
        {
            newArr[i][m] = a[i][j];
            m++;
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = arr[4] - 1; j < arr[5]; j++)
        {
            newArr[i][m] = a[i][j];
            m++;
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = arr[2] - 1; j < arr[3]; j++)
        {
            newArr[i][m] = a[i][j];
            m++;
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = arr[0] - 1; j < arr[1]; j++)
        {
            newArr[i][m] = a[i][j];
            m++;
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%c", newArr[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    scanf("%d %d\n", &r, &c);
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    char a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            scanf("%c", &a[i][j]);
        scanf("\n");
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d", arr[i]);
    }

    reverse(a, arr);

    return 0;
}