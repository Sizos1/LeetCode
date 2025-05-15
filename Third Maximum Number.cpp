#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool comp(int a, int b)
{
    return a > b;
}

int thirdMax(vector<int> &nums)
{
    sort(nums.begin(), nums.end(), greater<int>());
    int max = nums[0];
    int rank = 1;
    for (int num = 0; num < nums.size() && rank < 3; num++)
    {
        if (nums[num] < max)
        {
            max = nums[num];
            rank++;
        }
    }
    return rank == 3 ? max : nums[0];
}

// siento que mis soluciones funcionan pero se ven feas :( debería ser T O(nlogn)