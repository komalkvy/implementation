#include<bits/stdc++.h>
using namespace std;
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
int apple = 0; int orange = 0;
for(int i=0; i<apples.size(); i++){
    int dis= apples[i]+a;
    if(dis>=7&& dis<=10){
        apple++;
    }
}
for(int i=0; i<oranges.size(); i++){
    int dis= oranges[i]+b;
    if(dis>=7&& dis<=10){
        orange++;
    }
}
cout<<apple<<" "<<orange<<endl;

    
}

int main()
{
    int s=7, t=10, a, b;
    vector<int> apples={-2,2,1};
    vector<int> oranges={5,-6};
    cin>>a>>b;
    countApplesAndOranges(s,t,a,b,apples,oranges);
    return 0;
}
