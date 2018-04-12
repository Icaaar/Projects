#include <iostream>
using namespace std;

int main()
{
    int A,b,c;
    cin >> A;
    c = 0;
    b = 0;
    while (A>0)
    {
    b = A%10;
    if (b != 1)
    {
    c = c*10;
    c = c+b;
    }
    A = A/10;
    }
    cout << c;

}
