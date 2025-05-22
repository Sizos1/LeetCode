#include <unordered_map>
#include <string>

using namespace std;

int firstUniqChar(string s)
{
    unordered_map<char, int> map;
    for (int index = 0; index < s.size(); index++)
    {
        map.count(s[index]) ? map[s[index]] += 1 : map[s[index]] = 1;
    }
    for (int index = 0; index < s.size(); index++)
    {
        if (map.at(s[index]) == 1)
        {
            return index;
        }
    }
    return -1;
}