//
// Created by fred on 2020-03-04.
//
//#include <stdio.h>
#include <stdbool.h>

int maxProfit(int* prices, int pricesSize){
    int profit = 0;
    for (int i = 0; i < pricesSize - 1; i++) {
        int diff = prices[i + 1] - prices[i];
        if (diff > 0) {
            profit +=  diff;
        }
    }
    return profit;
}