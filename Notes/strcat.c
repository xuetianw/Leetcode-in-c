//
// Created by fred on 2020-03-09.
//

#include "string.h"
#include "stdlib.h"
#include <stdio.h>

int main(int argc, char ** argv) {
    char dest[50] = "This is an";
    char src[50] = " example";

    strcat(dest, src);
    printf("dest is %s ", dest);
    return 0;
}