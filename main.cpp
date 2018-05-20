#include <iostream>
#define N 10
using namespace std;

int main()
{
    int a[N] = {10, 20, 45, 26, 55, 7, 54, 100, 78, 1};
    int Max, Sum;
    Max = 0;
    for(int i = 0; i<N; i++)
    {
  //      cout << a[i] << endl;
            for(int j = 1; j<N; j++)
        {
            if(i != j){
            Sum = a[i]+a[j];
            if (Sum > Max)
                Max = Sum;
                cout << Max << endl;
            }
        }

    }
    if (Max%2==0)
        cout << "Контроль не пройден";
        else
        cout << Max << endl;
 //       cout << "Контроль пройден";

    return 0;
}
