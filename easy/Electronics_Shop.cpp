#include <bits/stdc++.h>
using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b)
{
    int moneyspent = -1;
    for (int i = 0; i < keyboards.size(); i++)
    {
        for (int j = 0; j < drives.size(); j++)
        {
            int totalcost = keyboards[i] + drives[j];
            if (totalcost <= b)
            {
                moneyspent = max(moneyspent, totalcost);
            }
        }
    }
    return moneyspent;
}
int main()
{
    vector<int> keyboards = {40, 50, 60};
    vector<int> drives = {5, 8, 12};
    int b = 60;
    cout << getMoneySpent(keyboards, drives, b) << endl;
}