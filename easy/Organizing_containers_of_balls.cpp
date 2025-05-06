#include<bits/stdc++.h>
using namespace std;

string organizingContainers(vector<vector<int>> container) {
    int n = container.size();
    vector<long long> containerSum(n, 0);
    vector<long long> typeSum(n, 0);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            containerSum[i] += container[i][j];
            typeSum[j] += container[i][j];
        }
    }

    sort(containerSum.begin(), containerSum.end());
    sort(typeSum.begin(), typeSum.end());

    return (containerSum == typeSum) ? "Possible" : "Impossible";
}

int main() {
    
        vector<vector<int>> container={{1,4},{2,3}};
        
        cout << organizingContainers(container) << endl;
    
    return 0;
}
