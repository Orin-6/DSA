#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallindex])
            {
                smallindex = j;
            }
        }
        swap(arr[smallindex], arr[i]);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n = 6;
    int arr[] = {3, 7, 1, 77, 26, 4};
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}
