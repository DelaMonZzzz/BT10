#include <iostream>

using namespace std;

struct Chuoi
{
    int n;
    char* s = new char;
    Chuoi(string m)
    {
        char* x = new char [m.length()];
        for (int i = 0; i < m.length(); i++)
        {
            *(x + i) = m[i];
        }
        n = m.length();
        s = x;
    }

    void print()
    {
        cout << s;
    }

    void append(const char* m)
    {
       int i(0);

       while (*(m+i) != NULL)
       {
           *(s+n) =  *(m+i);
           n++;
           i++;
       }
    }
};


int main()
{
    Chuoi s = Chuoi("hello");
    s.append(" Thresh");
    s.print();
    return 0;
}

