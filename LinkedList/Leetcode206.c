//
// Created by fred on 2020-03-05.
//
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* cur = head;

    while (cur != NULL) {
        struct ListNode* next_node = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next_node;
    }
    return prev;
}