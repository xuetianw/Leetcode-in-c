//
// Created by fred on 2020-03-06.
//
#include "string.h"
#include "stdlib.h"
#include <stdio.h>

char * addBinary(char * a, char * b){
    unsigned int length1 = strlen(a);
    unsigned int length2 = strlen(b);
    char res_arr[length1 + length2 + 1];
    for (int i = 0; i < length1; i++) {
        res_arr[i] = a[i] - '0';
    }
    for (int j = 0; j < length2; j++) {
        res_arr[length1 + j] = a[j] - '0';
    }
    char* copy = malloc((length1 + length2 + 2)*sizeof(char));
    strcpy(copy, res_arr);
    copy[length1 + length2 + 1] = '\0';
    return copy;
}

int main(int argc, char ** argv) {
    char * temp = addBinary("12", "43");
    printf("Greeting message: %s\n", temp);
//
//    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
//    printf("Greeting message: %s\n", greeting );
//    printf("%lu", strlen(greeting));
}