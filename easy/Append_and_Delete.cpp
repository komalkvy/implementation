#include <bits/stdc++.h>
using namespace std;

string appendAndDelete(string s, string t, int k)
{
    int common = 0;
    for (int i = 0; i < min(s.length(), t.length()); i++)
    {
        if (s[i] == t[i])
        {
            common++;
        }
        else
            break;
    }
    int totalchanges = (s.length() - common) + (t.length() - common);
    if (k >= s.length() + t.length())
    {
        return "Yes";
    }
    else if (k >= totalchanges && (k - totalchanges) % 2 == 0)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}
int main()
{
    string s = "abc";
    string t = "abf";
    int k = 3;
    cout << appendAndDelete(s, t, k) << endl;
    return 0;
}
