#include <iostream>
using namespace std;

void mergeArray(int arr[], int left, int mid, int right)
{
    int i = left, j = mid + 1, k = 0;
    int size = right - left + 1;
    int temp[size];

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left, k = 0; i <= right; i++, k++)
        arr[i] = temp[k];
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        mergeArray(arr, left, mid, right);
    }
}

int main()
{
    int n;

    cout << "Enter the element num: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " values: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array:";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
