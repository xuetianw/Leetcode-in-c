//
// Created by fred on 2020-03-07.
//
#include <stdbool.h>
#include <math.h>

bool is_prime(int n) {
    if (n == 0 || n == 1) return false;
    if (n == 2) return true;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int countPrimes(int n) {
    if (n < 2) return 0;

    int count = 0;

    for (int i = 0; i < n; i ++) {
        if (is_prime (i)) count ++;
    }
    return count;
}