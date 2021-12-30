#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#define true 0
#define false 1

struct ListNode {
    int val;
    struct ListNode *link;
  };

struct ListNode *reverse(struct ListNode *start){
    struct ListNode *prev,*ptr,*next;
    prev = NULL;
    ptr = start;
    next = NULL;
    while (ptr != NULL)
    {
        next = ptr->link;
        ptr->link = prev;
        prev = ptr;
        ptr = next;
    }
    start = prev;
    return start;
}

struct ListNode *palindrome(struct ListNode *start){
    struct ListNode *fast = start;
    struct ListNode *slow = start;
    slow = slow->link;
    fast = fast->link->link;
    slow->link=reverse(slow->link);
    slow=slow->link;

while(slow!=NULL){
    if(start->val!=slow->val)
    return false;
    slow=slow->link;
    start=start->link; 
}
return true;

}