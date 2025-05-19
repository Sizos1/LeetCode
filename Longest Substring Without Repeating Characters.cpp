#include <string>
#include <unordered_map>

using namespace std;

int lengthOfLongestSubstring(string s)
{
    unordered_map<char, int> map;
    int maxString = 0;
    int currentWindow = 0;
    for (int index = 0; index < s.size(); index++)
    {
        char symbol = s.at(index);
        if (map.count(symbol) && map[symbol] >= currentWindow)
        {
            currentWindow = map[symbol] + 1;
        }
        maxString = max(maxString, index - currentWindow + 1);
        map[symbol] = index;
    }
    return maxString;
}

// me costó, lo admito me tocó buscar qué era el método sliding window, pero luego de entender, me salió fácil codificarlo