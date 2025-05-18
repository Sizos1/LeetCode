#include <iostream>
#include <vector>

using namespace std;

vector<unsigned long long int> fib(int n)
{
    vector<unsigned long long int> fib = {0, 1};
    for (int i = 2; i <= n; i++)
    {
        fib.push_back(fib[i - 1] + fib[i - 2]);
    }
    return fib;
}

int main()
{
    int n = 3 % 3;
    cout << n;
    return 0;
}