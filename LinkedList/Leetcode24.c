//
// Created by fred on 2020-03-06.
//

#include <stdlib.h>
#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode dummy_head;
    dummy_head.next = head;

    struct ListNode* prev = &dummy_head;
    struct ListNode* first_node = head;
    while (first_node != NULL && first_node->next != NULL) {
        struct ListNode* next_first = first_node->next->next;
        struct ListNode* second_node = first_node->next;
        prev->next = second_node;
        second_node->next = first_node;

        first_node->next = next_first;

        prev = first_node;
        first_node = next_first;
    }

    return dummy_head.next;
}