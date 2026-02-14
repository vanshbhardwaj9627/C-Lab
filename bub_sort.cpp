#include <iostream>

using namespace std;
int main()
{
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Sorted array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
