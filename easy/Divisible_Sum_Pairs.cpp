#include <bits/stdc++.h>
using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar)
{

    int cnt = 0;
    for (int i = 0; i < ar.size(); i++)
    {
        for (int j = i + 1; j < ar.size(); j++)
        {
            if ((ar[i] + ar[j]) % k == 0)
            {
                cnt++;
            }
        }
    }
    return cnt;
}
int main()
{
    vector<int> ar = {1, 2, 3, 4, 5, 6};
    int k = 5;
    int n = ar.size();
    cout << divisibleSumPairs(n, k, ar) << endl;

    return 0;
}
