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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
            return head;
        ListNode* currodd=head;
        ListNode* curreve=head->next;
        ListNode* dummynode=new ListNode(-1);
        ListNode* pre=dummynode;
        while(currodd!=nullptr){
            ListNode* newnode=new ListNode(currodd->val);
            pre->next=newnode;
            pre=pre->next;
            if(currodd->next == nullptr)
                break;
            currodd = currodd->next->next;
        }
        while(curreve!=nullptr){
            ListNode* newnode=new ListNode(curreve->val);
            pre->next=newnode;
            pre=pre->next;
            if(curreve->next == nullptr)
                break;
            curreve = curreve->next->next;
        }
        return dummynode->next;
    }
};