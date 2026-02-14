#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int start = 0, end = n - 1, mid = 0;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            cout << "Peak at: " << mid << endl;
            return 0;
        }
        else if (arr[mid] > arr[mid - 1] && !(arr[mid] > arr[mid + 1]))
        {
            start = mid + 1;
        }
        else if (!(arr[mid] > arr[mid - 1]) && arr[mid] > arr[mid + 1])
        {
            end = mid - 1;
        }
    }
    cout << "There is no peak." << endl;
}