#include <bits/stdc++.h>
using namespace std;

int sockMerchant(int n, vector<int> ar)
{
    sort(ar.begin(), ar.end());
    int count = 1;
    int pair = 0;
    for (int i = 0; i < ar.size() - 1; i++)
    {
        if (ar[i] == ar[i + 1])
        {
            count++;
        }
        else
        {
            pair = pair + (count / 2);
            count = 1;
        }
        if (i == ar.size() - 2)
        {
            pair = pair + (count / 2);
        }
    }
    return pair;
}
int main()
{
    int n = 7;
    vector<int> ar = {1, 2, 1, 2, 1, 3, 2};

    cout << sockMerchant(n, ar) << endl;
    return 0;
}