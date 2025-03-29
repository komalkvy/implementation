#include<bits/stdc++.h>
using namespace std;

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
k=k%a.size();
int l=a.size();
for(int i=0;i<queries.size();i++){
    int temp=(queries[i]-k+l)%l;
    queries[i]=a[temp];
}
return queries;
}
int main(){
    vector<int> a={3,4,5};
    int k=2;
    vector<int> queries={1,2};
    vector<int> result = circularArrayRotation(a, k, queries);
    
    for (int val : result) {
        cout << val << " "<<endl;
    }
    
    return 0;
}