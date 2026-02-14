#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 13, 42, 44, 45, 76, 87, 99, 100, 120, 143, 1333};
    cout << "Enter the number to search for: ";
    int n;
    cin >> n;
    int start = 0, end = (sizeof(arr) / sizeof(arr[0])) - 1;
    int mid = 0;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == n)
        {
            cout << n << " is found at index " << mid << endl;
            return 0;
        }
        else if (arr[mid] < n)
        {
            start = mid + 1;
        }
        else if (arr[mid] > n)
        {
            end = mid - 1;
        }
    }
    cout << n << " is not found in the array." << endl;
    return 1;
}