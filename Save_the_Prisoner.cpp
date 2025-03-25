#include <bits/stdc++.h>
using namespace std;

int saveThePrisoner(int n, int m, int s)
{
    int result = (s + m - 1) % n;
    return (result == 0) ? n : result;    //(condition)?value if true: value if false
}
int main()
{
    int n = 4, m = 6, s = 2;
    cout << saveThePrisoner(n, m, s) << endl;
    return 0;
}