#include <bits/stdc++.h>
using namespace std;

int utopianTree(int n)
{

    int height = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            height = height * 2;
        }
        else
        {
            height = height + 1;
        }
    }
    return height;
}

int main()
{
    int n = 5;
    cout << utopianTree(n) << endl;
    return 0;
}
