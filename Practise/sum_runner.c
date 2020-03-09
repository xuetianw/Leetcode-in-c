//
// Created by fred on 2020-03-08.
//

#include "../Notes/test.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include<time.h>

void calculating_sum(int num, int* res) {
    int sum = 0;
    for (int i = 0; i <= num; i++) {
        sum += i;
    }
    *res = sum;
}

int main(int argc, char ** argv) {
    time_t t;
    srand((unsigned) time(&t));

    const int number_of_array = 1000;
    int* num_arr = malloc(sizeof(num_arr) * number_of_array);
    for (int i = 0 ; i < number_of_array; i++) {
//range of the array is [0 - 500]
        num_arr[i] = rand() % 500;
    }

    int* res = malloc(sizeof(res) * number_of_array);
    for (int i = 0 ; i < number_of_array; i++) {
//range of the array is [0 - 500]
        calculating_sum(num_arr[i], &res[i]);
        printf("the number calculated is %d "
               "and the result number is %d \n", num_arr[i], res[i]);
    }
    char* arr = "adc";
    printf("%c", (*(arr + 1)));
}


