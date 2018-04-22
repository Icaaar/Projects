#include <iostream>
using namespace std;
#define N 30
int main()
{
    int a[N] = {1948, 1912, 1938, 1950, 1952, 1944, 1903, 1926, 1965, 1973,
                1969, 1997, 1930, 1967, 1980, 1917, 1982, 1931, 1900, 1907,
                1928, 1957, 1958, 1939, 1940, 1971, 1995, 1963, 1953, 1923};
    int Min = a[1];
    int n;
    for(int i = 0; i<N; i++)
    {
        if(a[i]<Min)
        {
            Min = a[i];
        n = i;
        }

    }
    cout << n << ". " << Min << endl;
}
