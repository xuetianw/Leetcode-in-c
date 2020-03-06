//
// Created by fred on 2020-03-06.
//

#include <stdlib.h>
#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* oddEvenList(struct ListNode* head){
    if (head == NULL) return NULL;
    struct ListNode* odd_ptr = head;
    struct ListNode* even_ptr = head->next;
    if (even_ptr == NULL) return odd_ptr;

    struct ListNode* odd = head;
    head = head->next;
    struct ListNode* even = head;
    head = head->next;

    int index = 1;
    int update = -1;
    while (head != NULL) {
        // odd number
        if (index % 2 == 1) {
            odd->next = head;
            head = head->next;
            odd = odd->next;
            update = 1;
        } else {
            even->next = head;
            even = even->next;
            head = head->next;
            update = 2;
        }
        index++;
    }
    if (update == 1) {
        even->next = NULL;
    } else if (update == 2) {
        odd->next = NULL;
    }
    odd->next = even_ptr;
    return odd_ptr;
}


int main(int argc, char ** argv) {

}