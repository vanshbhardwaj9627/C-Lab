#include <iostream>
using namespace std;

int main()
{
    int x = 1314;
    int *p = &x;
    int &r = x;

    cout << "The value of x: " << x << endl;
    cout << "The memory address of x: " << p << endl;
    cout << "The value stored in p: " << p << endl;
    cout << "The dereferrence value *p: " << *p << endl;
    cout << "The value accessed through r: " << r << endl;
    *p = 131;
    cout << "First by updating *p: " << x << endl;
    r = 13;
    cout << "Second by updating r: " << x << endl;
}