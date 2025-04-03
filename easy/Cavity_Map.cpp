#include <bits/stdc++.h>
using namespace std;

vector<string> cavityMap(vector<string> grid)
{
    int n = grid.size();
    vector<string> result = grid;
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            char current = grid[i][j];
            // Check if current cell is greater than all adjacent cells
            if (current > grid[i - 1][j] &&
                current > grid[i + 1][j] &&
                current > grid[i][j - 1] &&
                current > grid[i][j + 1])
            {
                result[i][j] = 'X';
            }
        }
    }

    return result;
}
int main()
{
    vector<string> grid = {"989", "191", "111"};
    vector<string> result = cavityMap(grid);
    for (const string &row : result)
    {
        cout << row << endl;
    }
    return 0;
}