#include <bits/stdc++.h>

using namespace std;

int birthday(vector<int> s, int d, int m)
{
    int count = 0;
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum += s[i];
    }

    if (sum == d)
        count++;

    for (int i = m; i < s.size(); i++)
    {
        sum += s[i] - s[i - m];
        if (sum == d)
            count++;
    }

    return count;
}
int main()
{
    vector<int> s = {2, 2, 1, 3, 2};
    int d = 4, m = 2;
    cout << birthday(s, d, m) << endl;
    return 0;
}