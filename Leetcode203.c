//
// Created by fred on 2020-03-05.
//
#include <stdlib.h>
#include <stdio.h>
struct ListNode {
    int val;
    struct ListNode* next;
};

//todo
struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode* cur = head;
    while (cur != NULL && cur->val == val) {
        cur = cur->next;
    }
    head = cur;
    if (cur == NULL) {
        return NULL;
    }
    struct ListNode* prev = cur;
    cur = cur->next;
    while (cur!= NULL) {
        if (cur->val == val) {
            prev->next = cur->next;
            cur = cur->next;
        } else {
            prev = cur;
            cur = cur->next;
        }

    }
    return head;
}