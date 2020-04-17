#include <bits/stdc++.h>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2)
{

    bool isPossible = false;
    if (((x1 < x2) && (v1 <= v2)) || ((x2 < x1) && (v2 <= v1)))
    {
        return "NO";
    }
    else
    {
        while (true)
        {

            if (x1 == x2)
            {
                isPossible = true;
                break;
            }
            else if (((x1 < x2) && (v1 < v2)) || ((x2 < x1) && (v2 < v1)))
            {
                break;
            }
            x1 = x1 + v1;
            x2 = x2 + v2;
        }
    }

    if (isPossible)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{

    string s = kangaroo(0, 2, 5, 3);

    cout << s << endl;

    return 0;
}