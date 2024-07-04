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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* start= head->next;
        ListNode* nextsum= start;

        while(nextsum != nullptr){
            int sum=0;
            while(nextsum->val!=0){
                sum+= nextsum->val;
                nextsum= nextsum->next;
            }
            start->val= sum;
            nextsum =nextsum->next;
            start->next=nextsum;
            start= start->next;
        }

        return head->next;
    }
};

