//
// Created by fred on 2020-03-05.
//
#include <stdlib.h>
#include <stdio.h>

int** transpose(int** A, int ASize, int* AColSize, int* returnSize, int** returnColumnSizes){
    if (A == NULL) {
        return NULL;
    }
    int** res = malloc(ASize * sizeof(int*));
    for (int i = 0; i < ASize; i++) {
        res[i] = malloc(*AColSize * sizeof(int));
    }

    for (int i = 0; i < ASize; i++) {
        for (int j = 0; j < *AColSize; j++) {
            res[j][i] = A[i][j];
        }
    }

    *returnSize = *AColSize;
    **returnColumnSizes = ASize;
    return res;

}