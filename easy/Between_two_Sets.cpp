#include <bits/stdc++.h>
using namespace std;
int getTotalX(vector<int> &a, vector<int> &b)
{
    int cnt = 0;
    int lcm = a[0];
    for (int i = 1; i < a.size(); i++)
    {
        lcm = ((a[i] * lcm) / (__gcd(a[i], lcm)));
    }
    int min = *min_element(b.begin(), b.end());
    int flag;
    for (int i = lcm; i <= min; i = i + lcm)
    {
        flag = 1;
        for (int j = 0; j < b.size(); j++)
        {
            if (b[j] % i != 0)
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            cnt++;
        }
    }
    return cnt;
}
    int main()
    {
        vector<int> a = {2, 4};
        vector<int> b = {16, 32, 96};
        cout << getTotalX(a, b) << endl;

        return 0;
    }