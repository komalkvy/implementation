#include <bits/stdc++.h>
using namespace std;
int viralAdvertising(int n)
{
    int liked = 0, shared = 5, total = 0;
    while (n--)
    {
        liked = shared / 2;
        shared = liked * 3;
        total = total + liked;
    }
    return total;
}
int main()
{
    int n = 3;
    cout << viralAdvertising(n) << endl;
    return 0;
}