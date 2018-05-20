#include <iostream>
#define N 15
using namespace std;

int main()
{
    float a[N] = {10, 5, 9, 7, 5, 3, 6, 3, 4, 5, 7, 10, 1, 6, 5};
    float Min = 1000;
    for(int i = 0; i<N; i++)
    {
            for(int j = 1; j<N; j++)
        {
            if((j-i>=6)&&((a[i]*a[j])<Min))
                Min = (a[i]*a[j]);
        }
    }
    cout << Min << endl;
    return 0;
}
