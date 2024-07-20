#include <iostream>
using namespace std;

// Buy and sell stocks
void maxProfit(int *prices, int n) {
    int bestBuy[100000];
    bestBuy[0] = INT32_MAX;

    for(int i=1; i<n; i++) {
        bestBuy[i] = min(bestBuy[i-1], prices[i-1]);
    }
    int maxProfit = 0;
    for(int i=0; i<n; i++) {
        int profit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, profit);
    }
    cout << "Max profit is " << maxProfit << endl;
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(int);

    maxProfit(prices, n);
}