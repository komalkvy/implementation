#include <bits/stdc++.h>
using namespace std;

void kaprekarNumbers(int p, int q)
{
    bool flag = false;
    for (long long i = p; i <= q; i++)
    {
        long long sq = (long long)i * i;
        long long cnt = 0;
        long long cpy = i;
        while (cpy > 0)
        {
            cnt++;
            cpy = cpy / 10;
        }
        long long div = pow(10, cnt);
        long long sum = (sq / div) + (sq % div);

        if (sum == i)
        {
            flag = true;
            cout << i << " ";
        }
    }
    if (flag == false)
    {
        cout << "INVALID RANGE";
    }
}
int main()
{
    int p = 1, q = 100;
    kaprekarNumbers(p, q);
    return 0;
}