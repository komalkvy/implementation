#include <bits/stdc++.h>
using namespace std;

long taumBday(int b, int w, int bc, int wc, int z)
{
    long costblack = min(bc, wc + z);
    long costwhite = min(wc, bc + z);
    long result = (b * costblack) + (w * costwhite);
    return result;
}
int main()
{
    int b = 3, w = 5, bc = 3, wc = 4, z = 1;
    cout << taumBday(b, w, bc, wc, z) << endl;
    return 0;
}