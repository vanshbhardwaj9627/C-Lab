#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements for the array." << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    int i, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > key)
            {
                arr[j + 1] = arr[j];
            }
            else
                break;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}