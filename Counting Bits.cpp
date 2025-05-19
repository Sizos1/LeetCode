#include <vector>

using namespace std;

vector<int> countBits(int n)
{
    vector<int> result;

    for (int i = 0; i < n + 1; i++)
    {
        int num = i;
        int count = 0;
        for (int j = 0; j < 32; j++)
        {
            if (num & 1)
            {
                count++;
            }
            num >>= 1;
        }
        result.push_back(count);
    }
    return result;
}

// jajajaj pero está re lento, que mal
// la forma correcta era usando 3 punteros 2 a cada extremo y uno que recorra el contenedor