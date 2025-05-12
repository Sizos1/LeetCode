#include <vector>
#include <unordered_map>
#include <stdlib.h>
using namespace std;

// lo hice a lo tonto y pasó, pero hay una solución mucho mejor jajaj

bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    for (int num = 0; num < nums.size(); num++)
    {
        for (int i = 1; i <= k && num + i < nums.size(); i++)
        {
            if (nums[num] == nums[num + i])
                return true;
        }
    }
    return false;
}

// benditos hashmaps esta me gusta mucho más

bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    unordered_map<int, int> map;
    for (int num = 0; num < nums.size(); num++)
    {
        auto isNum = map.find(nums[num]);
        if (isNum != map.end() && abs(num - isNum->second) <= k)
        {
            return true;
        }
        map[nums[num]] = num;
    }
    return false;
}
