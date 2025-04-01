#include <bits/stdc++.h>
using namespace std;

vector<int> permutationEquation(vector<int> p)
{
    vector<int> result;
    int x = 1, y = 0;
    while (x <= p.size())
    {
        for (int i = 0; i < p.size(); i++)
        {
            if (p[i] == x)
            {
                y = i + 1;
                break;
            }
        }
        for (int i = 0; i < p.size(); i++)
        {
            if (p[i] == y)
            {
                y = i + 1;
                break;
            }
        }
        result.push_back(y);
        x++;
    }
    return result;
}
int main()
{
    vector<int> p = {5, 2, 1, 3, 4};
    vector<int> result = permutationEquation(p);
    for (int val : result)
    {
        cout << val << " " << endl;
    }

    return 0;
}