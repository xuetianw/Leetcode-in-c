//
// Created by fred on 2020-03-03.
//

#include "stdlib.h"

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                int* arr = malloc(2 * sizeof(*arr));
                arr[0] = i;
                arr[1] = j;
                *returnSize = 2;
                return arr;
//                int arr[2];
//                arr[0] = i;
//                arr[1] = j;
//                return arr;
            }
        }
    }
    return NULL;
}