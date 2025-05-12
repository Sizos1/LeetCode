#include <vector>
#include <unordered_set>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    unordered_set<int> values;
    for (int num : nums)
    {
        if (values.count(num))
            return true;
        values.insert(num);
    }
    return false;
}

// El poder de los hashmaps es genial
// pero hay al parecer una solución más rápida que es ordenandolo y luego recorriendo a ver si el siguiente valor es el mismo wtf