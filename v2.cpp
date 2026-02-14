#include <iostream>
using namespace std;

class box
{
    int length;
    int width;
    int height;

public:
    box(int l, int w, int h)
    {
        length = l;
        width = w;
        height = h;
    }

    int volume()
    {
        return length * width * height;
    }
};
int main()
{
    box b{12, 12, 2};
    int volume = b.volume();
    cout << "Volume : " << volume << endl;
}