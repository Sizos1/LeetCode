#include <iostream>
#include <vector>
using namespace std;

vector<int> getRow(int rowIndex)
{
    vector<vector<int>> triangle = {
        {1}}; // Initialize the triangle with the first row
    for (int actualRow = 0; actualRow < rowIndex; actualRow++)
    {
        int rowSize = triangle[actualRow].size();
        vector<int> row = {}; // Create a new row
        for (int element = 0; element < rowSize + 1; element++)
        {
            if (element == 0 || element == rowSize)
            {
                row.push_back(
                    1); // Add 1 at the beginning and end of each row
            }
            else
            {
                row.push_back(triangle[actualRow][element - 1] +
                              triangle[actualRow][element]);
            }
        }
        triangle.push_back(row); // Add the new row to the triangle
    }
    return triangle.back(); // Return the last row
}