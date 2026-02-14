#include <iostream>
using namespace std;

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
    int smallest;
    int i, j, index;
    for (i = 0; i < n; i++)
    {
        smallest = arr[i];
        index = i;
        for (j = i; j < n; j++)
        {
            if (arr[j] < smallest)
            {
                smallest = arr[j];
                index = j;
            }
        }
        arr[index] = arr[i];
        arr[i] = smallest;
    }
    cout << "Sorted array: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}