#include <iostream>
using namespace std;

int quick_sort(int arr[], int start, int end);
int partition(int arr[], int start, int end);
int main()
{
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quick_sort(arr, 0, n - 1);
    cout << "Sorted Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int quick_sort(int arr[], int start, int end)
{
    if (start < end)
    {
        int pivot = partition(arr, start, end);

        quick_sort(arr, start, pivot - 1);
        quick_sort(arr, pivot + 1, end);
    }
}

int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int i = start - 1;

    for (int j = start; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[end]); // placing pivot at the correct position
    return i + 1;               // location of pivot
}
