#include <bits/stdc++.h>
using namespace std;
int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2)
{
    int fine = 0;
    if (y1 < y2 || (y1 == y2 && m1 < m2) ||(d1 <= d2 && m1 == m2 && y1 == y2))
    {
        fine = 0;
    }
    else if (m1 == m2 && y1 == y2)
    {
        fine = 15 * (d1 - d2);
    }
    else if (y1 == y2)
    {
        fine = 500 * abs(m2 - m1);
    }
    else
    {
        fine = 10000;
    }
    return fine;
}
int main()
{
    int d1 = 14, m1 = 7, y1 = 2018, d2 = 5, m2 = 7, y2 = 2018;
    cout << libraryFine(d1, m1, y1, d2, m2, y2) << endl;
    return 0;
}
