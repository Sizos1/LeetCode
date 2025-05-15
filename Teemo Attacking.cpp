#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int findPoisonedDuration(vector<int> &timeSeries, int duration)
{
    int result = 0;
    int endVenom = timeSeries[0];
    int start = timeSeries[0];
    for (int attack = 0; attack < timeSeries.size(); attack++)
    {
        if (endVenom >= timeSeries[attack])
        {
            endVenom = timeSeries[attack] + duration - 1;
        }
        else
        {
            result += endVenom - start + 1;
            start = timeSeries[attack];
            endVenom = timeSeries[attack] + duration - 1;
        }
    }
    result += endVenom - start + 1;
    return result;
}

// JAJAJAJAJ si lo hice que risa. No sé si aasí querían que lo hiciera pero que risa