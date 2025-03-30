#include <bits/stdc++.h>
using namespace std;

int squares(int a, int b)
{
    // smallest integer whose square is >= a
    int start = ceil(sqrt(a));

    //  largest integer whose square is <= b
    int end = floor(sqrt(b));

    // formula for number of perfect squares between range a and b is (b-a+1)
    return max(0, end - start + 1);
}

int main()
{
    int a = 24, b = 49;
    cout << squares(a, b) << endl;  
    return 0;
}
