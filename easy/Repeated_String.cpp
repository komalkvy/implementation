#include <bits/stdc++.h>
using namespace std;

long repeatedString(string s, long n)
{

    long count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
            count++;
    }
    count = n / s.size() * count;
    for (int i = 0; i < n % s.size(); i++)
    {
        if (s[i] == 'a')
            count++;
    }
    return count;
}
int main()
{
    string s = "aba";
    long n = 10;
    cout << repeatedString(s, n) << endl;
    return 0;
}
