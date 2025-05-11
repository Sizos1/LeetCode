#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int majorityElement(vector<int> &nums)
{
    unordered_map<int, int> countRecord;
    for (int num : nums)
    {
        countRecord.count(num) ? countRecord[num]++ : countRecord[num] = 1;
    }
    int maxCount = INT_MIN;
    int result = 0;
    for (auto num : countRecord)
    {
        if (num.second > maxCount)
        {
            maxCount = num.second;
            result = num.first;
        };
    }
    return result;
}

// Me tocó aprender hashmaps y al parecer hay un algoritmo que no utilicé. Algo tiene que ver
// votaciones. Era llevar un conteo de cuantas veces aperece la primer variable y si va a -1
// empieza a contar para el otro número