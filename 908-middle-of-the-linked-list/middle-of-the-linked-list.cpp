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
    ListNode* middleNode(ListNode* head) {
        ListNode* fast= head;
        ListNode* slow= head;
        //base case 
        //kb tk chalega
        while(fast!= NULL){
            //1 step aage badha do
            fast= fast->next;
            //firse chk kro ki fast null to nhi h
            // agr nhi h to fast ko aage bhadhao or slow ko bhi
            if(fast!= NULL){
                fast= fast->next;
                //2 step cmplt
                //slow ko aage bhadhate h
                slow= slow->next;
            }
        }

        return slow;
    }
};