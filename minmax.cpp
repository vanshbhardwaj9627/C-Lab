#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    cin >> arr[0];
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    cout << "The minimum value in the array: " << min << endl;
    cout << "The maximum value in the array: " << max << endl;
}