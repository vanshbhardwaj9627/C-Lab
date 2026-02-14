#include <iostream>
using namespace std;

int main()
{
    int n;
    do
    {
        cout << "Enter the size of array: " << endl;
        cin >> n;
    } while (n < 1 || n > 100);
    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number to look for: " << endl;
    int a;
    cin >> a;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == a)
        {
            cout << a << " found at index " << i << endl;
            return 0;
        }
    }
    cout << "Desired number not found" << endl;
}