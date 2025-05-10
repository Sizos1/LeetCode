#include <iostream>
#include <vector>
using namespace std;

// Time complexity: O(n^2) (LIMIT EXCEEDED)
int maxProfit(vector<int> &prices)
{
    int maxProfit = 0;
    for (int stock = 0; stock < prices.size() - 1; stock++)
    {
        for (int nextStock = stock + 1; nextStock < prices.size(); nextStock++)
        {
            if (prices[nextStock] > prices[stock])
            {
                maxProfit = max(maxProfit, prices[nextStock] - prices[stock]);
            }
        }
    }
    return maxProfit;
}

// Time complexity: O(n)
int maxProfit(vector<int> &prices)
{
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int price : prices)
    {
        minPrice = min(minPrice, price);              // Update the minimum price
        maxProfit = max(maxProfit, price - minPrice); // Calculate the maximum profit
    }
    return maxProfit;
}