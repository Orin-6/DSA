#include <iostream>
using namespace std;

void bubbleSort(int intArr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (intArr[j] > intArr[j + 1])
            {
                swap(intArr[j], intArr[j + 1]);
            }
        }
    }
}

void printArray(int intArr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << intArr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n = 5;
     int intArr[] = {78, 3, 9, 121, 82};
     bubbleSort(intArr, n);
     printArray(intArr, n);
     return 0;

   /* int n;
    cout << "Enter the elements number: ";
    cin >> n;

    int intArr[n];
    cout << "Enter " <<  n << " Values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> intArr[i];
    }

    bubbleSort(intArr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << intArr[i] << " ";
    }

    return 0;*/
}
