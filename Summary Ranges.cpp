#include <vector>
#include <string>

using namespace std;

vector<string> summaryRanges(vector<int> &nums)
{
    vector<string> result;
    int min = !nums.empty() ? nums[0] : 0;
    for (int num = 0; num < nums.size(); num++)
    {
        if (nums[num + 1] != nums[num] + 1)
        {
            min != nums[num] ? result.push_back(to_string(min) + "->" + to_string(nums[num])) : result.push_back(to_string(min));
            min = nums[num + 1];
        }
    }
    return result;
}

// quizás exista una solución más elegante pero yo la hice así