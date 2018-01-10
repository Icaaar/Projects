#include <iostream>
using namespace std;

int main()
{
    int h;
    cout << "¬ведите высоту пирамиды:";
    cin >> h;
    for(int a = 1;a <= h; a++)
    {
        for(int b = a; b <= h; b++)
        {
            cout << "  " ;
        }
        for(int c = 1; c <= 2*a-1; c++)
        {
            cout << "*" << " " ;
        }
        cout << endl;
    }
}
