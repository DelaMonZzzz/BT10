#include <iostream>

using namespace std;

struct point {
    double x;
    double y;
};

void print(point a)
{
    cout << &a << endl;
}

void Print(point &a)
{
    cout << &a << endl;
}

int main()
{
    point a;
    cin >> a.x >> a.y;
    cout << &a << endl;
    print(a);
    Print(a);

    return 0;
}

