#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int> &nums)
{
    int result = 0;
    for (int num : nums)
    {
        result ^= num; // XOR operation
    }
    return result;
}

// me dejó tan confundido esté que me tocó investigar un montón
//  lo que tocaba hacer era verlo en sistema binario y entender que xor entre dos números iguales es 0
//  es por eso que al final el resultado es el número que no se repite