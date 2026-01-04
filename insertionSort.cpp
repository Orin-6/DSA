#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    { 
        int j = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > j)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = j;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}
int main()
{
    int n = 5;
    int arr[] = {3, 7, 11, 8, 5};
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}