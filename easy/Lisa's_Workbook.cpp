#include <bits/stdc++.h>
using namespace std;
int workbook(int n, int k, vector<int> arr)
{
    int count = 0, pg = 1;
    for (int i = 0; i <n; i++) // loop thru chapters
    {
        int problems = arr[i];

        for (int j = 1; j <= problems; j++) // loop thru prblms
        {
            if (j == pg)
            {
                count++;
            }
            if (j % k == 0 || j == problems)
                pg++;
        }
    }
    return count;
}
int main()
{
    int n = 5, k = 3;
    vector<int> arr = {4, 2, 6, 1, 10};
    cout << workbook(n, k, arr) << endl;
    return 0;
}