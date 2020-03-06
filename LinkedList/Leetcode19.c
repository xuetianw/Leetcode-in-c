//
// Created by fred on 2020-03-05.
//
#include "stdlib.h"

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    int count = 0;
    struct ListNode* cur = head;
    while (cur != NULL) {
        count++;
        cur = cur->next;
    }

    int target = count - n;

    if (target == 0) {
        return head->next;
    }

    cur = head;
    struct ListNode* prev = cur;
    cur = cur->next;
    int i = 1;
    while (cur != NULL) {
        if (i == target) {
            prev->next = cur->next;
            break;
        }
        i++;
        prev = cur;
        cur = cur->next;
    }
    return head;
}