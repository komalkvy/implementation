#include <bits/stdc++.h>
using namespace std;

string fairRations(vector<int> B)
{
    int loaves = 0;

    for (int i = 0; i < B.size() - 1; i++)
    {
        if (B[i] % 2 != 0)
        {
            B[i]++;
            B[i + 1]++;
            loaves = loaves + 2;
        }
    }
    string ans = to_string(loaves);
    if (B[B.size() - 1] % 2 != 0)
    {
        return "NO";
    }
    else
    {
        return to_string(loaves);
    }
}
int main()
{
    vector<int> B = {4, 5, 6, 7};
    string result = fairRations(B);

    cout << result << endl;

    return 0;
}