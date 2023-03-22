#include <iostream>

using namespace std;

struct point {
    double x;
    double y;
};

point mid_point(point const a, point const b)
{
    point mp;
    mp.x = (a.x + b.x)/2;
    mp.y = (a.y + b.y)/2;
    return mp;
}

void print(point x)
{
    cout << "(" << x.x << ", " << x.y << ")";
}

int main()
{
    point a;
    cin >> a.x >> a.y;
    point b;
    cin >> b.x >> b.y;
    print(mid_point(a, b));

    return 0;
}

