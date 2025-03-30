#include <bits/stdc++.h>
using namespace std;

int flatlandSpaceStations(int n, vector<int> c)
{
    sort(c.begin(), c.end()); // Space stations ko sort kar liya

    int max_distance = max(c[0], n - 1 - c.back()); // Pehli aur last city ka distance check kiya

    for (int i = 1; i < c.size(); i++)
    {
        max_distance = max(max_distance, (c[i] - c[i - 1]) / 2); // Beach ka max distance find kiya
    }

    return max_distance;
}

int main()
{
    int n = 5, m = 2;

    vector<int> c = {0, 4};

    cout << flatlandSpaceStations(n, c) << endl;
    return 0;
}
