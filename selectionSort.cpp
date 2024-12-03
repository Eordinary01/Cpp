#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
};

void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
};

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
    int arr[] = {64, 56, 32, 5, 6};
    int n = sizeof(arr) /sizeof(arr[0]);

    cout << "Original Array: ";
     printArray(arr, n);

    selectionSort(arr, n);

    cout << "Sorted Array: ";
    printArray(arr, n);
}