//
// Created by fred on 2020-03-07.
//

#include "string.h"
#include "stdlib.h"
#include <stdio.h>
#include <stdbool.h>

bool isLetterOrDigit(char ch) {
    return (ch >= 'a' && ch <= 'z')
            || (ch >= 'A' && ch <= 'Z')
             || (ch >= '0' && ch <= '9');
}
bool is_uppercase(char ch) {
    return (ch >= 'A' && ch <= 'Z');
}

bool isPalindrome(char * s){
    int l = 0;
    int r = strlen(s);
    while (l < r) {
        while (l < r && !isLetterOrDigit(s[l])) l++;
        while (l < r && !isLetterOrDigit(s[r])) r--;

        char left_char = s[l];
        if (is_uppercase(left_char)) {
            left_char += 'a' - 'A';
        }

        char right_char = s[r];
        if (is_uppercase(right_char)) {
            right_char += 'a' - 'A';
        }
        if (left_char != right_char) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int l = 0;
int r = s.length() - 1;
while (l < r) {
while (l < r && !Character.isLetterOrDigit(s.charAt(l))) l++;
while (l < r && !Character.isLetterOrDigit(s.charAt(r))) r--;

if (Character.toLowerCase(s.charAt(l)) != Character.toLowerCase(s.charAt(r))) {
return false;
}
l++;
r--;
}
return true;