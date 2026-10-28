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
ListNode* reversell(ListNode* head){
    ListNode* curr=head;
    ListNode* last=nullptr;
    while(curr!=nullptr){
        ListNode* front=curr->next;
        curr->next=last;
        last=curr;
        curr=front;
    }
    return last;
}
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
        return true;
        }
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* newhead=reversell(slow->next);
        ListNode* first=head;
        ListNode* sec=newhead;
        while(sec!=nullptr){
            if(first->val!=sec->val){
                reversell(newhead);
                return false;
            }
            first=first->next;
            sec=sec->next;
        }
        reversell(newhead);
        return true;

    }
};