#include <vector>
#include <algorithm>

using namespace std;

int missingNumber(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    for (int num = 0; num < nums.size() - 1; num++)
    {
        if (nums[num + 1] != nums[num] + 1)
        {
            return nums[num] + 1;
        }
    }
    return nums[0] == 0 ? nums[nums.size() - 1] + 1 : 0;
}

// facilito