#include <iostream>
using namespace std;

int main()
{
    int A,b,c,d;
    cin >> A;
    c = 0;
    b = 0;
    d = 1;
    while (A>0)
    {
    b = A%10;
    if (b != 1)
    {
    c = c + b*d;
    d = d*10;
    }
    A = A/10;
    }
    cout << c;

}
