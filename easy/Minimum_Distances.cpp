#include <bits/stdc++.h>
using namespace std;
int minimumDistances(vector<int> a)
{
    int mindistance = INT_MAX;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            if (a[i] == a[j])
            {
                mindistance = min(mindistance, j - i);
            }
        }
    }
    if (mindistance == INT_MAX)
    {
        return -1;
    }
    else
    {
        return mindistance;
    }
}
int main()
{
    vector<int> a = {3, 2, 1, 2, 3};
    cout << minimumDistances(a) << endl;
    return 0;
}