#include <vector>
#include <algorithm>
using namespace std;

class NumArray
{
public:
    vector<int> data;
    NumArray(vector<int> &nums)
    {
        data = nums;
    }

    int sumRange(int left, int right)
    {
        int result = 0;
        for (int num = left; num <= right; num++)
        {
            result += data[num];
        }
        return result;
    }
};

// jajajaj lo hice en 3 min, pero me aparece que la solución es muy lenta no sé porq