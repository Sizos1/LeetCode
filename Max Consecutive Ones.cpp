#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int result = 0;
    int max = 0;
    for (auto num : nums)
    {
        if (num)
        {
            max++;
        }
        else
        {
            result = std::max(result, max);
            max = 0;
        }
    }
    result = std::max(result, max);
    return result;
}

// de primeras.