//
// Created by fred on 2020-03-06.
//
#include "string.h"
#include "stdlib.h"
#include <stdio.h>

char *toLowerCase(char * str){
    unsigned int len = strlen(str);
    char* lower_case_arr = malloc((len + 1) * sizeof(char));
    for (int i = 0; i < len; i++) {
        char el = str[i];
        if (el >= 'A' && el <= 'Z') {
            lower_case_arr[i] = el - ('A' - 'a');
        } else {
            lower_case_arr[i] = el;
        }
    }
    lower_case_arr[len] = '\0';
    return lower_case_arr;
}

int main(int argc, char ** argv) {
//    char* arr = toLowerCase("As");
//    printf("length of arr is %lu\n", strlen(arr));
//    printf("the arra is %s\n", arr);
//    free(arr);
//    char* arr1 = "a";
//    char* arr2 = "b";
//    strcat(arr1, arr2);
//    printf("the arra is %s\n", arr1);
}