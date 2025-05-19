#include <vector>

using namespace std;

void reverseString(vector<char> &s)
{
    int end = s.size() - 1;
    for (int i = 0; i < s.size() / 2; i++)
    {
        swap(s[i], s[end]);
        end--;
    }
}

int main()
{
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    reverseString(s);
    return 0;
}