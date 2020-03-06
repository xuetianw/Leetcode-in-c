//
// Created by fred on 2020-03-05.
//

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

uint32_t reverseBits(uint32_t n) {
    uint32_t arr[32];
    int count = 0;
    while (n != 0) {
        arr[31 - count++] = n % 2;
        n /= 2;
    }
    for (int i = 0; i < 16; i++) {
        int temp = arr[i];
        arr[i] = arr[31 - i];
        arr[31 - i] = temp;
    }



    uint32_t res = 0;
    for (int i = 0; i < 32; i++) {
        res += arr[i] * pow(2, 31 - i);
    }

    return res;
}


int main(int argc, char ** argv) {
    int arr[32];
    uint32_t a = 5;
    printf("%d", a);
    return 0;
}