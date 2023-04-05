#include <iostream>

using namespace std;

struct diem1 {
    int a[3];
};

struct diem2 {
    diem1 b;
};

int main()
{
    diem1 c;
    for (int i = 0; i < 3; i++)
    {
        c.a[i] = i*i;
    }
    cout << &c << endl;

    diem1 d;
    cout << &d << endl;

    d = c;
    for (int i = 0; i < 3; i++)
    {
        cout << d.a[i] << " ";
    }
    cout << endl;
    cout << &d << endl;

    diem2 e;
    e.c = c;
    cout << &e << endl;

    diem2 f;
    cout << &f << endl;

    f = e;
    cout << &f << endl;

    return 0;
}
