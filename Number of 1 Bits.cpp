#include <iostream>

using namespace std;

int hammingWeight(int n)
{
    int result = 0;
    for (int bit = 0; bit < 32; bit++)
    {
        if (n & 1)
            result++;
        n >>= 1;
    }
    return result;
}

// después de hacer el problema anterior este fue mucho más fácil jajaja
// es chistoso porque estos temas tienen bastante que ver con lo que estoy viendo
// en arquitectura de computadores