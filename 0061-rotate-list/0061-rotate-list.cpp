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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* temp=head;
        int c=1;
        while(temp->next!=nullptr){
            c++;
            temp=temp->next;
        }
        if(k%c==0) return head;
        k=k%c;
        temp->next=head;
        temp=head;
        c = c-k-1;
        while(c--){
            temp=temp->next;
        }
        head=temp->next;
        temp->next=nullptr;
        return head;
    }
};