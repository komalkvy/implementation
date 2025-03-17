#include <bits/stdc++.h>
using namespace std;

int designerPdfViewer(vector<int> h, string word)
{
    int l = word.size();
    int maxht = 0;
    int pos;
    for (int i = 0; i < l; i++)
    {
        pos = word[i] - 97;
        if (h[pos] > maxht)
            maxht = h[pos];
    }
    return l * maxht;
}
int main()
{
    vector<int> h = {1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    string word = "abc";
    cout << designerPdfViewer(h, word);
    return 0;
}
