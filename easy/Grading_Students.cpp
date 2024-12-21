#include <bits/stdc++.h>
using namespace std;
vector<int> gradingStudents(vector<int> grades) {
int cnt = grades.size();
    for (int i = 0; i < cnt; i++)
    {
        if (grades[i] >= 38)
        {
            int a = grades[i] / 5;
            a = a * 5;
            if (a < grades[i])
            {
                a += 5;
                if (a - grades[i] < 3)
                {
                    grades[i] = a;
                }
            }
        }
    }

    return grades;
}
int main()
{
    vector<int> grades={73,67,38,33};
    vector<int> res=gradingStudents(grades);
    for(auto it :res){
        cout<<it<<" ";
    }
    return 0;
}
