#include <bits/stdc++.h>
using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b)
{

    int countalice = 0;
    int countbob = 0;

    if (a[0] > b[0])
    {
        countalice++;
    }
    else if (a[0] < b[0])
    {
        countbob++;
    }

    if (a[1] > b[1])
    {
        countalice++;
    }
    else if (a[1] < b[1])
    {
        countbob++;
    }

    if (a[2] > b[2])
    {
        countalice++;
    }
    else if (a[2] < b[2])
    {
        countbob++;
    }

    return {countalice, countbob};
}

int main()
{

    vector<int> a = {5, 6, 7};
    vector<int> b = {3, 6, 10};
    vector<int> result = compareTriplets(a, b);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}
