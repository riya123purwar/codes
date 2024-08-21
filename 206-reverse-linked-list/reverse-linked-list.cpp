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

    ListNode* reverseLL(ListNode* &prev, ListNode* &curr){
        //base case
        if(curr== NULL){
            //node reverese ho chuki h 
            //rev node ki starting pr prev wala ptr h
            return prev;
        }
        ListNode* forward= curr->next;
        //curr ko peeche wali disha m pt krwaya
        curr->next = prev;
        prev= curr;
        curr= forward;

        return reverseLL(prev,curr);
    }

    ListNode* reverseList(ListNode* head) {
        //step1: naming of prev, curr, forward
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* newhead= reverseLL(prev,curr);
        return newhead;
    }
};