#include <bits/stdc++.h>
using namespace std;

string angryProfessor(int k, vector<int> a)
{
    int cnt = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] <= 0)
        {
            cnt++;
        }
    }
    if (cnt >= k)
    {
        return "NO";
    }
    else
    {
        return "YES";
    }
}
int main()
{
    vector<int> a = {-2, -1, 0, 1, 2};
    int k = 3;
    cout << angryProfessor(k, a) << endl;
    return 0;
}