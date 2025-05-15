#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    unordered_map<int, int> map;
    vector<int> result;
    for (auto num : nums1)
    {
        map.count(num) ? map[num] += 1 : map[num] = 1;
    }
    for (auto num : nums2)
    {
        try
        {
            if (map.at(num) > 0)
            {
                result.push_back(num);
                map.at(num) -= 1;
            }
        }
        catch (const exception &e)
        {
        }
    }
    return result;
}

// suave