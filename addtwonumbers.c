#include <stdlib.h>
#include "leetcode.h"




struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode head  = { .val = 0, .next = NULL};
    struct ListNode* cur = &head;
    int tmp,  n1, n2, c = 0;
    while(l1  || l2  || c){
        n1 =  0; 
        if (l1){
            n1 = l1->val;
            l1 = l1->next;
        }
        n2 =  0;
        if (l2){
            n2 = l2->val;
            l2  = l2->next;
        }
        tmp = n1 + n2 + c;
        c = tmp > 9;
        
        cur->next = (struct ListNode *)malloc(sizeof(struct ListNode));
        cur = cur->next;
        cur->val = tmp % 10;
        cur->next = NULL;
    }
    return head.next;
}