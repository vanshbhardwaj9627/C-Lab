#include <iostream>
using namespace std;

struct box
{
    int length;
    int width;
    int height;
};

int main()
{
    box b{10, 20, 30};
    int volume = b.length * b.width * b.height;
    cout << "Volume: " << volume << endl;
}