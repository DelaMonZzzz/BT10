#include <iostream>

using namespace std;

struct point {
    double x;
    double y;
};

int main()
{
    point a;
    cin >> a.x >> a.y;
    cout << &a.x << " " << &a.y << " " << &a;

    return 0;
}

// Trường x có địa chỉ trùng với biến a, còn trường y có địa chỉ cách biến a 8 ô nhớ.

