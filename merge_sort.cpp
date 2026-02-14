#include <iostream>
using namespace std;

void merge_sort(int arr[], int start, int end);
void merge(int arr[], int start, int mid, int end);
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    merge_sort(arr, 0, n - 1);

    cout << "Sorted array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void merge_sort(int arr[], int start, int end)
{

    if (start < end)
    {
        int mid = (start + end) / 2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid + 1, end);

        merge(arr, start, mid, end);
    }
    return;
}

void merge(int arr[], int start, int mid, int end)
{
    int l1 = mid - start + 1;
    int l2 = end - mid;
    int first[l1];
    int second[l2];
    for (int i = 0; i < l1; i++)
    {
        first[i] = arr[start + i];
    }
    for (int i = 0; i < l2; i++)
    {
        second[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = start;
    while (i < l1 && j < l2)
    {
        if (first[i] <= second[j])
        {
            arr[k] = first[i];
            i++;
        }
        else
        {
            arr[k] = second[j];
            j++;
        }
        k++;
    }

    while (i < l1)
    {

        arr[k] = first[i];
        i++;
        k++;
    }
    while (j < l2)
    {

        arr[k] = second[j];
        j++;
        k++;
    }
}