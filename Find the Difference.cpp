#include <string>

using namespace std;

// XOR approach esta se me ocurrió  primero jajaj

char findTheDifference(string s, string t)
{
    int result = 0;
    for (auto ch : s)
    {
        result ^= ch;
    }
    for (auto ch : t)
    {
        result ^= ch;
    }
    return result;
}

// esta también me gusta
char findTheDifference(string s, string t)
{
    int si = 0;
    for (auto ch : s)
    {
        si += ch;
    }
    int ti = 0;
    for (auto ch : t)
    {
        ti += ch;
    }
    char result = si - ti;
    return result;
}