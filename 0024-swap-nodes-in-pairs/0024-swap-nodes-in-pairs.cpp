/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL||head->next==NULL)
        return head;
        
        ListNode* p=head;
        ListNode* n=head->next;
        ListNode* prev=NULL;



        while(p!=NULL&&p->next!=NULL){
        ListNode* np=p->next;
        p->next=np->next;
        np->next=p;
        if(prev!=NULL)
        prev->next=np;
        prev=p;
        p=p->next;

        }
    
        return n;
    }
};