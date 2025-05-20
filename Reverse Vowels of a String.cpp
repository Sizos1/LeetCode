#include <string>
#include <unordered_set>

using namespace std;

string reverseVowels(string s)
{
    int end = s.size() - 1;
    int start = 0;
    unordered_set<char> set = {'a', 'i', 'u', 'e', 'o', 'A', 'E', 'I', 'O', 'U'};
    while (start < end)
    {
        while (end > start && !set.count(s[end]))
        {
            end--;
        }
        while (start < end && !set.count(s[start]))
        {
            start++;
        }
        if (start < end)
        {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
    return s;
}

// facilito