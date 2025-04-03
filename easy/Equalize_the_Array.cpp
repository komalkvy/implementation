#include <bits/stdc++.h>
using namespace std;

int equalizeArray(vector<int> arr)
{
    int count = 1, max_freq = 1;
    sort(arr.begin(), arr.end());
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i - 1] == arr[i])
        {
            count++;
        }
        else
        {
            max_freq = max(count, max_freq);
            count = 1;
        }
        max_freq = max(count, max_freq);
    }
    return arr.size() - max_freq;
}
int main()
{
    vector<int> arr = {3, 3, 2, 1, 3};
    cout << equalizeArray(arr) << endl;
    return 0;
}
