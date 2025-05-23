#include <iostream>
#include <vector>

using namespace std;

bool isPerfectSquare(int num)
{
    if (num < 0)
        return false;
    if (num <= 1)
        return true;

    long left = 1;
    long right = num;

    while (left <= right)
    {
        long mid = left + (right - left) / 2;
        long square = mid * mid;

        if (square == num)
        {
            return true;
        }
        else if (square < num)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return false;
}

int main()
{
    isPerfectSquare(81);
    return 0;
}