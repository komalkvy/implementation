#include <bits/stdc++.h>
using namespace std;
int pickingNumbers(vector<int> a)
{
    sort(a.begin(), a.end());

    int maxx = 0;

    for (int i = 0; i < a.size(); ++i)
    {
        int count = 0;

        for (int j = i; j < a.size(); ++j)
        {
            if (abs(a[j] - a[i]) <= 1)
            {
                count++;
            }
        }

        maxx = max(maxx, count);
    }

    return maxx;
}
int main()
{
    vector<int> a = {4, 6, 5, 3, 3, 1};
    cout << pickingNumbers(a) << endl;
    return 0;
}