#include <bits/stdc++.h>
using namespace std;

int beautifulTriplets(int d, vector<int> arr) {
    int count = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] - arr[i] == d) {
                for (int k = j + 1; k < arr.size(); k++) {
                    if (arr[k] - arr[j] == d) {
                        count++;  // Increment only when you find a valid triplet
                    }
                }
            }
        }
    }
    
    return count;
}

int main() {
    int d = 3;
    vector<int> arr = {1, 2, 4, 5, 7, 8, 10};
    
    cout << beautifulTriplets(d, arr) << endl;
    
    return 0;
}
