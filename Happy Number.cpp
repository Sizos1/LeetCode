#include <iostream>
#include <vector>
#include <math.h>
#include <unordered_map>

using namespace std;

vector<int> separateDigits(int number)
{
    vector<int> result;
    while (number > 0)
    {
        int digit = number % 10;
        result.push_back(digit);
        number /= 10;
    }
    return result;
}

bool isHappy(int n)
{
    vector<int> digits = separateDigits(n);
    int sum = 0;
    for (int digit : digits)
    {
        sum += pow(digit, 2);
    }
    unordered_map<int, int> ifCycle;
    while (sum != 1)
    {
        if (ifCycle.count(sum))
        {
            return false;
        }
        ifCycle[sum] = 1;
        digits = separateDigits(sum);
        sum = 0;
        for (int digit : digits)
        {
            sum += pow(digit, 2);
        }
    }
    return true;
}

int main()
{
    isHappy(19);
    return 0;
}