//
// Created by fred on 2020-03-10.
//
#include "string.h"
#include "stdlib.h"
#include <stdio.h>
#include<time.h>
#include <stdbool.h>

bool hasAlternatingBits(int n){
    int prev_bit = n % 2;
    n /= 2;
    while (n != 0) {
        int cur_bit = n % 2;
        if (cur_bit == prev_bit) {
            return false;
        }
        prev_bit = cur_bit;
        n /= 2;
    }
    return true;
}

int main() {
    hasAlternatingBits(5);

}