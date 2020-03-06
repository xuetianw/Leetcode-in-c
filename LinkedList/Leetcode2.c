//
// Created by fred on 2020-03-04.

#include "stdlib.h"

//  Definition for singly-linked list.
  struct ListNode {
      int val;
      struct ListNode *next;
  };
 



struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

    struct ListNode* res = malloc(sizeof(*res));
    struct ListNode* head = res;

    int carry = 0;
    while (l1 != NULL || l2 != NULL) {
        int l1_digit = 0;
        int l2_digit = 0;
        if (l1 == NULL) {
            l1_digit = 0;
        } else {
            l1_digit = l1->val;
        }
        if (l2 == NULL) {
            l2_digit = 0;
        } else {
            l2_digit = l2->val;
        }
        res->next = malloc(sizeof(*res->next));
        res = res -> next;
        res->val = (l1_digit + l2_digit + carry) % 10;
        carry = (l1_digit + l2_digit + carry) / 10;
        if (l1 != NULL) l1 = l1->next;
        if (l2 != NULL) l2 = l2->next;
    }
    if (carry == 1) {
        res->next = malloc(sizeof(*res->next));
        res = res -> next;
        res->val = 1;
    }
    // add this line to get rid of error
    res->next = NULL;
    return head->next;

//    struct ListNode* res = malloc(sizeof(*res));
//    struct ListNode* head = res;
//
//    int carry = 0;
//    while (l1 != NULL || l2 != NULL) {
//        int l1_digit = 0;
//        int l2_digit = 0;
//        if (l1 == NULL) {
//            l1_digit = 0;
//        } else {
//            l1_digit = l1->val;
//        }
//        if (l2 == NULL) {
//            l2_digit = 0;
//        } else {
//            l2_digit = l2->val;
//        }
//        res->next = malloc(sizeof(*res->next));
//        res = res -> next;
//        res->val = (l1_digit + l2_digit + carry) % 10;
//        carry = (l1_digit + l2_digit + carry) % 10;
//        if (l1 != NULL) l1 = l1->next;
//        if (l2 != NULL) l2 = l2->next;
//    }
//    if (carry == 1) {
//        res->next = malloc(sizeof(*res->next));
//        res = res -> next;
//        res->val = 1;
//    }
//    return head->next;
}