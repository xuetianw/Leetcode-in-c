//
// Created by fred on 2020-03-06.
//
#include <stdlib.h>
#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* deleteDuplicates(struct ListNode* head){
    if (head == NULL) return NULL;
    struct ListNode* prev = head;
    struct ListNode* cur = head->next;

    while (cur != NULL) {
        if (cur->val == prev->val) {
            prev->next = prev->next->next;
            cur = cur->next;
        } else {
            cur = cur->next;
            prev = prev->next;
        }
    }
    return head;
}
int main(int argc, char ** argv) {

}