#include <bits/stdc++.h>
using namespace std;

int migratoryBirds(vector<int> arr)
{
    vector<int> freq(6, 0);

    for (int bird : arr)
    {
        freq[bird]++;
    }

    int maxFreq = 0, result = 0;
    for (int i = 1; i <= 5; i++)
    {
        if (freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            result = i;
        }
    }

    return result;
}

int main()
{
    
vector<int> arr={1,1,2,2,3};
    cout << migratoryBirds(arr) << endl;
    return 0;
}
