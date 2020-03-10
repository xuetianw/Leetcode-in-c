//
// Created by fred on 2020-03-10.
//
#include "string.h"
#include "stdlib.h"
#include <stdio.h>
#include<time.h>
#include <stdbool.h>

bool isPowerOfTwo(int n){
    if (n == 0) return false;
    while(n != 1) {
        if (n % 2 != 0) {
            return false;
        }
        n /= 2;
    }
    return true;
}

int main(){
    int n = 1;
    if (isPowerOfTwo(1)) {
        printf("%d is power of two \n", n);
        return true;
    }
    printf("%d is not power of two \n", n);
    return false;
}