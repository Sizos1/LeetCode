#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

string convertToTitle(int columnNumber)
{
    string result = "";
    while (columnNumber > 25)
    {
        int lett = columnNumber % 26;
        if (lett == 0)
        {
            result.push_back('Z');
            lett += 1;
        }
        else
        {
            result.push_back(static_cast<char>(lett + 64));
        }
        columnNumber = (columnNumber - lett) / 26;
    }
    if (columnNumber != 0)
        result.push_back(static_cast<char>(columnNumber + 64));
    reverse(result.begin(), result.end());
    return result;
}

// este me lo pusieron en into a programación jajajaj que recuerdos es fácil pero dedica rato
// me acuerdo que la primera vez q lo hice salió como en 100 líneas y me repetía un montón