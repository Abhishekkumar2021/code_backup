#include <iostream>
using namespace std;
int getSum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
void insertionsort(int arr[], int n)
{
    int i, temp, z, j;
    for (i = 1; i < n; i++)
    {
        z=arr[i];
        temp = getSum(arr[i]);
        j = i - 1;
        while (j >= 0 && getSum(arr[j]) > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        while (j >= 0 && arr[j] > z && getSum(arr[j])==temp){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = z;
    }
}
    int main(){
        int size;
        cin >> size;
        int sarray[size];
        for (int i = 0; i < size; i++)
            cin >> sarray[i] ;
        insertionsort(sarray, size);
        for (int i = 0; i < size; i++)
            cout<< sarray[i]<<" ";
        return 0;
    }