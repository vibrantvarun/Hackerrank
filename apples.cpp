#include <bits/stdc++.h>
#include <vector>
using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{

    vector<int> ans;

    int counta = 0;
    for (int i = 0; i < apples.size(); i++)
    {

        if (s <= a+apples[i] && a+apples[i] <= t)
        {
            ++counta;
        }
    }

    ans.push_back(counta);

    int countb = 0;
    for (int j = 0; j < oranges.size(); j++)
    {

        if (s <= b+oranges[j] && b+oranges[j] <= t)
        {
            ++countb;
        }
    }
    ans.push_back(countb);
    cout << ans[0] << endl;
    cout << ans[1] << endl;
}

int main()
{

    vector<int> apples = {-2, 2, 1};
    vector<int> oranges = {5, -6};

    countApplesAndOranges(7, 11, 5, 15, apples, oranges);
    return 0;
}