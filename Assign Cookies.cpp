#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int findContentChildren(vector<int> &g, vector<int> &s)
{
    sort(s.begin(), s.end());
    sort(g.begin(), g.end());
    int indexChidlren = 0, indexCookie = 0, result = 0;
    while (indexChidlren < g.size() && indexCookie < s.size())
    {
        if (g[indexChidlren] <= s[indexCookie])
        {
            result++;
            indexChidlren++;
            indexCookie++;
        }
        else
        {
            indexCookie++;
        }
    }
    return result;
}

// me parece impresionante que me haya salido a la primera.