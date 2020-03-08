//
// Created by fred on 2020-03-06.
//
#include "stdlib.h"
#include <stdio.h>

int**
matrixReshape(int** nums, int numsSize, int* numsColSize, int r, int c, int* returnSize, int** returnColumnSizes) {
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
    int size;
    int* ColumnSizes;
    int** matrix = malloc(2 * sizeof(int *));
    for (int i = 0; i < 2; i++) {
        matrix[i] = malloc(4 * sizeof(int));
    }
    matrix[0][0] = 10;matrix[0][1] = 11;matrix[0][2] = 12;matrix[0][3] = 13;
    matrix[1][0] = 14;matrix[1][1] = 15;matrix[1][2] = 16;matrix[1][3] = 17;


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
    for (int i = 0; i < 2; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}




