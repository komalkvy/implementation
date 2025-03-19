#include <bits/stdc++.h>
using namespace std;
int jumpingOnClouds(vector<int> c)
{
    int jump = 0;
    int i = 0;
    while (i < c.size() - 1)
    {
        if (c[i + 2] == 0)
        {
            i = i + 2;
        }
        else
        {
            i++;
        }
        jump++;
    }
    return jump;
}
int main()
{
    vector<int> c = {0, 1, 0, 0, 0, 1, 0};
    cout << jumpingOnClouds(c) << endl;
    return 0;
}
