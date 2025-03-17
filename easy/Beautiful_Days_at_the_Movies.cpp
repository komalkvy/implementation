#include <bits/stdc++.h>
using namespace std;

int beautifulDays(int i, int j, int k)
{
    int count = 0;

    for (int num = i; num <= j; num++)
    {
        int r = 0, temp = num;
        while (temp > 0)
        {
            r = r * 10 + (temp % 10);
            temp = temp / 10;
        }
        int d = abs(r - num);
        if (d % k == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int i = 20, j = 23, k = 6;
    cout << beautifulDays(i, j, k);
    return 0;
}
