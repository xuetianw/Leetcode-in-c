#include "../../../../usr/include/zconf.h"

//
// Created by fred on 2020-03-11.
//

#include "string.h"
#include "stdlib.h"
#include <stdio.h>
#include<time.h>
#include <stdbool.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

int getDecimalValue(struct ListNode* head){
    int temp_arr[30];
    int count = 0;
    while (head != NULL) {
        temp_arr[count++] = head->val;
        head= head->next;
    }
    int num_arr[count];
    for (int i = 0; i < count; i++) {
        num_arr[i] = temp_arr[i];
    }

    int multiplication = 1;
    int res = 0;
    for (int i = 0 ; i < count; i++) {
        res += num_arr[count - 1 - i] * multiplication;
        multiplication *= 2;
    }
    return res;
}
