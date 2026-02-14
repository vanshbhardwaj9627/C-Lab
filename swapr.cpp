#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int t = x;
    x = y;
    y = t;
}

int main()
{
    int x = 10, y = 221;
    swap(x, y);
    cout << x << " " << y << endl;
}