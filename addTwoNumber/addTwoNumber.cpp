/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#define NUM(x) (x==NULL?0:x->val)
#define NEXT(x) (x==NULL?NULL:x->next)

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(0);
        ListNode* head = l3;
        int add = 0,tmp; 
        while((l1 != NULL)||(l2 != NULL)){
            tmp = NUM(l1) + NUM(l2) + add;
            add = tmp/10;
            l3->next = new ListNode(tmp%10);
            l1 = NEXT(l1);
            l2 = NEXT(l2);
            l3 = NEXT(l3);
        }
        if(add == 1) l3->next = new ListNode(1);
        return head->next;
    }
};