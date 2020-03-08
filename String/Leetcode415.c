//
// Created by fred on 2020-03-06.
//
#include "string.h"
#include "stdlib.h"
#include <stdio.h>

void reverse_string(int len, char* res_char);

char* addStrings(char* num1, char* num2) {
    int length1 = strlen(num1);
    int length2 = strlen(num2);
    int len = 0;
    char* res_char = NULL;

    int carry = 0;
    int i = length1 - 1;
    int j = length2 - 1;
    while (i >= 0 || j >= 0) {

        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        char temp[2];
        sprintf(temp, "%d", sum % 10);

        len++;
        char* new_ptr = realloc(res_char, (len + 1) * sizeof(char));
        new_ptr[len - 1] = temp[0];
        new_ptr[len] = temp[1];
        res_char = new_ptr;
//        printf("res_char len : %lu\n", strlen(res_char));
        carry = sum / 10;
        i--;
        j--;
    }

    if (carry != 0) {
        len++;
        char* new_ptr = realloc(res_char, (len + 1) * sizeof(char));
        new_ptr[len - 1] = '1';
        new_ptr[len] = '\0';
        res_char = new_ptr;
    }
    reverse_string(len, res_char);

    return res_char;
}

void reverse_string(int len, char* res_char) {// reverse string
    for (int i = 0; i < len / 2; i++) {
        char temp = res_char[i];
        res_char[i] = res_char[len - i - 1];
        res_char[len - i - 1] = temp;
    }
}

int main(int argc, char** argv) {
    char* arr = addStrings("9", "99");
    printf("%lu\n", strlen(arr));
    free(arr);
//    char str1[12] = "Hello";
//    char str2[12] = "World";
//    char str3[12];
////    int  len ;
//
//    /* copy str1 into str3 */
//    strcpy(str3, str1);
//    printf("strcpy( str3, str1) :  %s\n", str3 );
//
//    /* concatenates str1 and str2 */
//    strcat( str1, str2);
//    printf("strcat( str1, str2):   %s\n", str1 );

    /* total lenghth of str1 after concatenation */
//    len = strlen(str1);
//    printf("strlen(str1) :  %d\n", len );
//    char test[3] = {'1', '2', '3'};
//    printf("%d\n", strcmp(test, "123"));
}