#include <iostream>
#include <vector>
using namespace std;

int maxActivities(vector<int> start, vector<int> end)
{
    // sort on end time

    // A0 select
    cout << " Selecting A0\n";
    int count = 1;
    int currEndTime = end[0];

    for (int i = 1; i <= start.size(); i++)
    {
        // non - overlapping
        if (start[i] >= currEndTime)
        {
            cout << " Selecting A" << i << endl;

            count++;
            currEndTime = end[i];
        }
    }

    return count;
}

int main()
{
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};

    cout << maxActivities(start, end) << endl;
    return 0;
}