#include <iostream>
#include <iomanip>
using namespace std;
#define N 3
int main(){
    int a[N][N][N];
    int Max,Sum = 0,m = 0;
    //Заполнение массива
    for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                for (int k = 0; k < N; k++)
                {
                    a[i][j][k] = (i + 1) * 100 + (j + 1) * 10 + (k + 1);
                    cout << setw(4) << a[i][j][k];
                }
                cout << endl;
            }
            cout << endl;
        }
        Max = a[0][0][0];
        Max  = Max -1;
        cout << Max << endl;
    for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                for (int k = 0; k < N; k++)
                {
                    if(a[i][j][k]>Max)
                        {
                        Max = a[i][j][k];

                        }
                        m++;
                        cout << m << ". " << Sum << endl;
                }
                Sum = Sum + Max;
            }

        }
        cout << Sum;
}
