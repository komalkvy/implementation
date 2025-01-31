#include <bits/stdc++.h>
using namespace std;

void bonAppetit(vector<int> bill, int k, int b)
{

    int totalbill = 0;
    for (int i = 0; i < bill.size(); i++)
    {
        if (i != k)
        {
            totalbill = totalbill + bill[i];
        }
    }
    int anna = totalbill / 2;
    if (anna == b)
    {
        cout << "Bon Appetit" << endl;
    }
    else
    {
        cout << b - anna << endl;
    }
}
int main()
{
    vector<int> bill = {3, 10, 2, 9};
    int k = 1;
    int b = 7;
    bonAppetit(bill, k, b);
    return 0;
}
