#include <bits/stdc++.h>
using namespace std;

int hurdleRace(int k, vector<int> height)
{
    int maxht = 0;
    for (int i = 0; i < height.size(); i++)
    {
        if (height[i] > maxht)
        {
            maxht = height[i];
        }
    }
    if (maxht > k)
    {
        return maxht - k;
    }
    else
    {
        cout << "0" << endl;
        ;
    }
    return 0;
}

int main()
{
    vector<int> height = {2, 5, 4, 5, 2};
    int k = 7;
    hurdleRace(k, height);
    return 0;
}