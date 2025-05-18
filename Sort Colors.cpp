#include <vector>
#include <unordered_map>

using namespace std;

void sortColors(vector<int> &nums)
{
    unordered_map<int, int> map;
    vector<int> result;
    for (auto &num : nums)
    {
        map.count(num) ? map[num] += 1 : map[num] = 1;
    }
    for (int num = 0; num < 3; num++)
    {
        if (map.count(num))
        {
            for (int i = 0; i < map.at(num); i++)
            {
                result.push_back(num);
            }
        }
    }
    nums = result;
}

int main()
{
    vector<int> arr = {1};
    sortColors(arr);
    return 0;
}