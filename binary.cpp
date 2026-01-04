#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int n = 5;
    int intArr[] = {3, 9, 78, 82, 121};

    cout << "Array element: ";
    printArray(intArr, n);
    

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(intArr, n, key);

    if (result == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found at index: " << result << endl;
    }

    return 0;

  

    
}
