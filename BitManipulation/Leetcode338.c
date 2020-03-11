//
// Created by fred on 2020-03-10.
//

#include "string.h"
#include "stdlib.h"
#include <stdio.h>
#include<time.h>
#include <stdbool.h>

int vaculate_num_of_one(int num) {
    int num_one_count = 0;
    while (num != 0) {
        if(num % 2 == 1) {
            num_one_count++;
        }
        num /= 2;
    }
    return num_one_count;
}

int* countBits(int num, int* returnSize){
    *returnSize = num + 1;
    int* res_arr = malloc((*returnSize) * sizeof(*res_arr));

    for (int i = 0; i < *returnSize; i++) {
        res_arr[i] = vaculate_num_of_one(i);
    }
    return res_arr;
}

int main() {

}