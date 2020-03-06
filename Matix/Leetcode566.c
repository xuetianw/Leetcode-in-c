//
// Created by fred on 2020-03-06.
//
#include "stdlib.h"
#include <stdio.h>

int**
matrixReshape(int nums[2][4], int numsSize, int* numsColSize, int r, int c, int* returnSize, int** returnColumnSizes) {
    int MULTIPLICATION = numsSize * (*numsColSize);
    if (r < 0 || c < 0 || r * c != MULTIPLICATION) {
        return nums;
    } else {
        int temp_arr[numsSize * (*numsColSize)];
        int count = 0;
        for (int i = 0; i < numsSize; i++) {
            for (int j = 0; j < *numsColSize; j++) {
                temp_arr[count++] = nums[i][j];
            }
        }

        int** result_arr = malloc(r * sizeof(int*));
        for (int i = 0; i < r; i++) {
            result_arr[i] = malloc(sizeof(int) * c);
        }

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                result_arr[i][j] = temp_arr[i * c + j];
            }
        }
        *returnSize = r;
        *returnColumnSizes = malloc(r * sizeof(int*));
        return result_arr;
    }
}

int main(int argc, char** argv) {
    int length = 4;
    int size = 0;
    int* ColumnSizes = malloc(sizeof(ColumnSizes));
    int matrix[2][4] = {
            {10, 11, 12, 13},
            {14, 15, 16, 17}
    };
    int** temp = matrixReshape(matrix, 2, &length, 4, 2, &size, &ColumnSizes);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", temp[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++) {
        free(temp[i]);
    }
    free(temp);

    free(ColumnSizes);

    return 0;
}




