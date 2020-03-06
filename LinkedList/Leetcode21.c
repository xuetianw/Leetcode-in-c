//
// Created by fred on 2020-03-06.
//

#include "stdlib.h"

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode dummy_head;
    struct ListNode* cur = &dummy_head;
    while (l1 != NULL && l2 != NULL) {
        int val;
        if (l1->val > l2->val) {
            val = l2->val;
            l2 = l2->next;
        } else {
            val = l1->val;
            l1 = l1->next;
        }
        cur->next = malloc(sizeof(*(cur->next)));;
        cur = cur->next;
        cur->val = val;
    }

    cur->next = (l1 == NULL) ? l2 : l1;
    return dummy_head.next;
}

