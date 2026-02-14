#include <iostream>
using namespace std;

struct box
{
    int length;
    int width;
    int height;

    int volume()
    {
        return length * width * height;
    }
};

int main()
{
    box b{10, 232, 123};
    int volume = b.volume();
    cout << "Volume: " << volume << endl;
}