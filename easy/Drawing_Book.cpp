#include <bits/stdc++.h>
using namespace std;

int pageCount(int n, int p)
{
    int frontturns = p / 2;
    int backturns = (n / 2) - (p / 2);

    return min(frontturns, backturns);
}
int main()
{
    int n = 5, p = 3;
    cout << pageCount(n, p) << endl;
    return 0;
}