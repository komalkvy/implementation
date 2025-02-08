#include <bits/stdc++.h>
using namespace std;

int countingValleys(int steps, string path)
{

    int valleys = 0;
    int altitude = 0;
    for (int i = 0; i < steps; i++)
    {
        if (path[i] == 'U')
        {
            altitude++;

            if (altitude == 0)
            {
                valleys++;
            }
        }
        else
        {
            altitude--;
        }
    }

    return valleys;
}
int main()
{
    int steps = 8;
    string path = "DDUUUUDD";
    int result = countingValleys(steps, path);
    cout << result << endl;
    return 0;
}
