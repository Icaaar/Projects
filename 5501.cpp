#include <iostream>
/*��� ������������� ������ �� 20 ���������.
 �������� ������� ����� ��������� ����� �������� �� 0 �� 10000 ������������.
  ������� �� ������������ ����� ��� �� ����� �� ������ ���������������� ��������
  , ����������� ����� � ������� ������������ �������� ����� ���������� ��������� �������,
   ��������� �� 5. ���� � �������� ������� ��� ��������,
    �������� �������� �������� ���������� ������ � ��� ���� ������ 5, �� ������� ��������� ��� �������.
*/
using namespace std;
#define N 20
int main () {
int a[N] = {2584, 6277, 1698, 4388, 3073, 2999, 8164,
            5335, 7764, 1198, 5539, 4240, 2864, 195,
            2020, 1197, 7858, 5, 3437, 5535};
int i, j, max = 0;
for (i=0; i<N; i++)
{
    if ((a[i]>=100) && (a[i]<1000) && (a[i]%5==0))
        max = a[i];
}
    if (max!=0)
        cout << max;
    else
        cout << "Find nothing elements" << endl;
}
