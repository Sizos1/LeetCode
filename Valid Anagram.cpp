#include <unordered_map>
#include <string>

using namespace std;

bool isAnagram(string s, string t)
{
    unordered_map<int, int> map1;

    for (auto st : s)
    {
        map1.count(st) ? map1[st] += 1 : map1[st] = 1;
    }
    for (auto ch : t)
    {
        if (!map1.count(ch))
        {
            return false;
        }
        map1[ch]--;
        if (!map1[ch])
        {
            map1.erase(ch);
        }
    }
    return map1.empty();
}