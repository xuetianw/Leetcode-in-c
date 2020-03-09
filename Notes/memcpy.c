//
// Created by fred on 2020-03-09.
//

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include<time.h>


int main(int argc, char** argv) {
    char arguments[5] = "get2";

    char subbuff1[100] = "longerstring";
    // the size is 5 -including the null pointer
    printf("size of this is %lu\n", sizeof(arguments));
    // the length is 4
    printf("length of this is %lu\n", strlen(arguments));

    memcpy(subbuff1, arguments, sizeof(arguments));

    memcpy(subbuff1, arguments, strlen(arguments) + 1);

    printf("length is %lu", strlen(subbuff1));

    int arr[100];
    printf("length is %lu\n", sizeof(arr));

//    char dest[50] = "longer string";
//    strcpy(dest,"H!!");
//    printf("length of dest is %lu\n", strlen(dest));
    char str1[10]= "awesome";
    char str2[10];
    char str3[10];

    strcpy(str2, str1);
    strcpy(str3, "well");
}