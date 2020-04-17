#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> gradingStudents(vector<int> grades)
{
    for (int i = 0; i < grades.size(); i++)
    {

        int updated = grades[i];

        if (updated >= 38)
        {
            if (grades[i] % 5 != 0)
            {
                while (true)
                {
                    if (updated % 5 == 0)
                    {
                        break;
                    }
                    ++updated;
                }
            }
            if (updated - grades[i] < 3)
            {
                grades[i] = updated;
            }
        }
    }

    return grades;
}

int main()
{
    vector<int> s = {73, 67, 38, 33};

    s = gradingStudents(s);

    for (int i = 0; i < s.size(); i++)
    {
        printf("%d ", s[i]);
    }
    return 0;
}