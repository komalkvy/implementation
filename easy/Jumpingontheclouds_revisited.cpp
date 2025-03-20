#include <bits/stdc++.h>
using namespace std;

int jumpingOnClouds(vector<int> c, int k)
{
    int e = 100;
    int i = 0;
    do
    {
        i = (i + k) % c.size();
        e--;
        if (c[i] == 1)
        {
            e -= 2;
        }
    } while (i != 0);

    return e;
}
int main()
{
    int k = 3;
    vector<int> c = {1, 1, 1, 0, 1, 1, 0, 0, 0, 0};
    cout << jumpingOnClouds(c, k) << endl;
    return 0;
}