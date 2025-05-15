#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    unordered_set<int> set;
    vector<int> result;
    for (auto num : nums1)
    {
        set.insert(num);
    }
    for (auto num : nums2)
    {
        if (set.count(num))
        {
            result.push_back(num);
            set.erase(num);
        }
    }
    return result;
}

// pues así lo hice jajajaj no muy elegante