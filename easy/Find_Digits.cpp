#include <bits/stdc++.h>
using namespace std;
int findDigits(int n)
{
    int original = n, count = 0;

    while (n > 0)
    {
        int digit = n % 10;
        if (digit != 0 && original % digit == 0)
        {
            count++;
        }
        n /= 10;
    }

    return count;
}

int main()
{
    int n = 111;
    cout << findDigits(n) << endl;
    return 0;
}
