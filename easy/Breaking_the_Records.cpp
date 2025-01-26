#include <bits/stdc++.h>
using namespace std;
vector<int> breakingRecords(vector<int> scores)
{
    int n = scores.size();
    int min = scores[0];
    int max = scores[0];
    int mincount = 0;
    int maxcount = 0;

    for (int i = 0; i < n; i++)
    {
        
        if (scores[i] > max)
        {
            max=scores[i];
            maxcount++;
        }
        if (scores[i] < min)
        {
            min=scores[i];
            mincount++;
        }
    }

    return {maxcount, mincount};
}
int main()
{
    vector<int> scores = {10,5,20,20,4,5,2,25,1};
    vector<int> result=breakingRecords(scores);
    cout << result[0]<<" "<<result[1] << endl;
    return 0;
}