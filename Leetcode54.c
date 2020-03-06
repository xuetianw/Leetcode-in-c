//
// Created by fred on 2020-03-05.
//


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>
#include <stdio.h>

// test cases does not pass in c
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize){

    if (matrixSize == 0) {
//        int *arr = malloc(sizeof(arr) * 0);
        return NULL;
    };
    int left = 0;
    int right = *matrixColSize - 1;
    int top = 0;
    int bottom = matrixSize - 1;
    int count = 0;
    int size = matrixSize * (*matrixColSize);
    int *res_arr = malloc (size * sizeof(*res_arr));
    while (top <= bottom && left <= right) {
        for(int i = left; i <= right; i++) {
            int test = matrix[top][i];
            res_arr[count++] = test;
        }
        top++;

        if (top <= bottom && left <= right) {
            for(int i = top; i <= bottom; i++) {
                res_arr[count++] = matrix[i][right];
            }
            right--;
        }

        if (top <= bottom && left <= right) {
            for(int i = right; i >= left; i--) {
                res_arr[count++] = matrix[bottom][i];
            }
            bottom--;
        }
        if (top <= bottom && left <= right) {
            for(int i = bottom; i >= top; i--) {
                res_arr[count++] = matrix[i][left];
            }
            left++;
        }
    }
    // list.add(matrix[finish_height][start_width]);

    return res_arr;

}


int main(int argc, char ** argv) {

    int r = 3, c = 4, i, j, count;

    int **arr = malloc(r * sizeof(int *));
//    printf("size of int %lu", sizeof(arr));
    for (i = 0; i < r; i++) {
//        printf("size of int %lu", sizeof(arr[i]));
        arr[i] = malloc(c * sizeof(int));
    }


    // Note that arr[i][j] is same as *(*(arr+i)+j)
    count = 0;
    for (i = 0; i <  r; i++)
        for (j = 0; j < c; j++)
            arr[i][j] = ++count;  // OR *(*(arr+i)+j) = ++count

    for (i = 0; i <  r; i++)
        for (j = 0; j < c; j++)
            printf("%d ", arr[i][j]);

    /* Code for further processing and free the
       dynamically allocated memory */

    printf("\n");
//    int matrixColSize = 3;
    int returnsize = 0;
    int *res = spiralOrder(arr, r, &c, &returnsize);


    for (int t = 0; t < 12; t++) {
        printf("res %d ",res[t]);
    }
    printf("\n");
    for (int k = 0; k < r; k++)
    {
        free(arr[k]);
    }
    free(arr);
    free(res);

//    printf("size of int %lu", sizeof(int));


    return 0;
}
