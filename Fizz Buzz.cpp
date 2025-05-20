#include <vector>
#include <string>

using namespace std;

vector<string> fizzBuzz(int n)
{
    vector<string> result;
    for (int num = 1; num <= n; num++)
    {
        if (!(num % 15))
        {
            result.push_back("FizzBuzz");
        }
        else if (!(num % 3))
        {
            result.push_back("Fizz");
        }
        else if (!(num % 5))
        {
            result.push_back("Buzz");
        }
        else
            result.push_back(to_string(num));
    }
    return result;
}

// fizz buzz