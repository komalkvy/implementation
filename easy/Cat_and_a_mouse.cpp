#include <bits/stdc++.h>
using namespace std;
string catAndMouse(int x, int y, int z)
{

    int d1, d2;
    d1 = (z - x > 0) ? (z - x) : (x - z);
    d2 = (z - y > 0) ? (z - y) : (y - z);

    if (d1 > d2)
    {
        return "Cat B";
    }
    else if (d1 < d2)
    {
        return "Cat A";
    }
    else
    {
        return "Mouse C";
    }
}
int main()
{
    int x=1, y=2, z=3;
    
    cout << catAndMouse(x,y,z) << endl;
    return 0;
}