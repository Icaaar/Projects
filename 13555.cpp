#include <iostream>
/*��� ������, ���������� 2016 ������������� ����� �����, �� ����������� 1000.
*���������� ����� � ������� ������������ �� ��� ��������� ����� �������,
*����������������� ������ ������� ������������� �������� B.
*���� ����� ����� � ������� ���, ����� ��������� ������ ����.
*/
using namespace std;
#define N 20
 int main(){
    int a[N] = {236, 227, 900, 584, 114, 971, 522,
                557, 711, 794, 498, 281, 313, 808,
                306, 23, 567, 198, 122, 957};
    int i, m, k;
    m = 0;
    for (i=0; i<N; i++)
    {
        if ((a[i]%16 == 11) && (a[i] > m))
         m = a[i];
        //cout << m << "; ";
    }
    cout << m;
 }
