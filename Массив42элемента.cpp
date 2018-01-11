#include <iostream>
using namespace std;

int main()
{
    cout << "Even-numbered elements:" << endl;
    int a[43];
    for(int b = 0; b < 43; b++)
    {
        a[b] = -42+2*b;

        cout << b << ": " << a[b] << endl;
    }
    cout << "\n\n\nOdd elements:" << endl;
    for(int b = 0; b < 42; b++)
    {
        a[b] = -41+2*b;

        cout << b << ": " << a[b] << endl;
    }
}
