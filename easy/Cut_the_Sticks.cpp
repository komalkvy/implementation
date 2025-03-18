#include <bits/stdc++.h>
using namespace std;
vector<int> cutTheSticks(vector<int> arr)
{
    vector<int> result;
    int zero = 0;
    while (zero < arr.size())
    {
        result.push_back(arr.size() - zero);
        int min = 1001;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > 0 && arr[i] < min)
                min = arr[i];
        }
        for (int i = 0; i < arr.size(); i++)
        {
            arr[i] = arr[i] - min;
            if (arr[i] == 0)
                zero++;
        }
    }

    return result;
}
int main()
{
    vector<int> arr = {5, 4, 4, 2, 2, 8};
    vector<int> result = cutTheSticks(arr);
    for (int val : result)
    {
        cout << val << endl;
    }
    return 0;
}