#include <bits/stdc++.h>
using namespace std;

int chocolateFeast(int n, int c, int m)
{
    int choclates = n / c;
    int wrappers = choclates;

    while (wrappers >= m;)
    {
        int extra = wrappers / m;
        choclates = choclates + extra;
        wrappers = wrappers % m + extra;
    }
    return choclates;
}
int main()
{
    int n = 15, c = 3, m = 2;
    cout << chocolateFeast(n, c, m) << endl;
    return 0;
}