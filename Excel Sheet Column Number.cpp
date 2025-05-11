#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>

using namespace std;

int titleToNumber(string columnTitle)
{
    int exponent = columnTitle.size() - 1;
    int result = 0;
    for (char lett : columnTitle)
    {
        int value = (lett - 64) * pow(26, exponent);
        result += value;
        exponent--;
    }
    return result;
}

// no sé si hice algo mal en la otra parecida pero esta fue muchísimo más fácil jajaj salió en 5 min