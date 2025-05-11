#include <iostream>
#include <cstdint>

uint32_t reverseBits(uint32_t n)
{
    uint32_t result = 0;
    for (int i = 0; i < 32; i++)
    {
        uint32_t bit = (n & 1);
        result <<= 1;
        result |= bit;
        n >>= 1;
    }
    return result;
}

// no conocía las operaciones para manipular bits. puedo hacer shift además de las normales como
// AND, OR o XOR (&, |, ^) shift es >> hacía derecha, << izquierda. Así se puede manipular a nivel
// de bits las variables como uint32_t