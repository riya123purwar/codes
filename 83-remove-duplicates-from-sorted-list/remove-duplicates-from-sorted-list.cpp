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
    ListNode* deleteDuplicates(ListNode* head) {
        //cases k saath khelenge
        //case1: LL is empty
        if(head==NULL){
            return head;
        }

        else if(head->next == NULL){
            return head;
        }
        else{
            ListNode* prev=head;
            ListNode* temp= prev->next;
            while(temp!= NULL){
                if(temp->val == prev->val){
                   //duplicate mil gya
                prev->next= temp->next;
                temp->next= NULL;
                delete temp; 
                // temp= prev->next;
                }
                else{
                    //duplicate nhi mila
                    prev= prev->next;
                    temp= temp->next;
                }
                temp= prev->next;
            }
            return head;
            
        }
    }
};