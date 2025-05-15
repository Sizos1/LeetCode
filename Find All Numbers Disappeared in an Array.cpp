#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// No supe que hacer con la solución de espacio constante nagh
vector<int> findDisappearedNumbers(vector<int> &nums)
{
    vector<int> result;
    unordered_set<int> set;
    for (int num : nums)
    {
        set.insert(num);
    }
    for (int num = 1; num < nums.size() + 1; num++)
    {
        if (set.find(num) == set.end())
        {
            result.push_back(num);
        }
    }
    return result;
}