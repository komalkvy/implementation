#include <bits/stdc++.h>
using namespace std;

int howManyGames(int p, int d, int m, int s)
{
    int cp = p, count = 0;
    while (s >= cp)
    {
        s = s - cp;
        count++;
        cp = max(cp - d, m);
    }
    return count;
}
int main()
{
    int p = 20, d = 3, m = 6, s = 80;
    cout << howManyGames(p, d, m, s) << endl;
    return 0;
}