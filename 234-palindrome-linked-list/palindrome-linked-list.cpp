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

ListNode* getmid(ListNode* head,ListNode* &slowkaprev){
    ListNode* slow= head;
        ListNode* fast= head;
        while(fast!= nullptr){//kb khtm hoye
            //fast ko aage badha skte h
            fast = fast->next;
            //chk twice
            if(fast != nullptr){
                //fast ko badhao or slow ko bhi
                fast= fast -> next;
                slowkaprev=slow;
                slow= slow->next;
            }
        }
        return slow;
}

ListNode* getrev(ListNode* &curr, ListNode* &prev){
    while(curr!=nullptr){
        ListNode* forward = curr->next;
        curr->next= prev;
        prev= curr;
        curr= forward;
    }
    return prev;
}

    bool isPalindrome(ListNode* head) {
        //exceptions or likhne h
        if(head == nullptr){
            //LL empty h
            return true;
        }
        if(head->next == nullptr){
            //single LL
            return true;
        }
        //3steps:
        //step1: find middle node
        //step 2: divide LL and reverse it into 2 , prev->next = NULL
        //slow wali LL h use hme reverse krna h
        //step 3: compare both LL 
        ListNode* slowkaprev = nullptr;
        ListNode* mid= getmid(head, slowkaprev);
        //brk
        slowkaprev->next=nullptr;
        //reverse krna h
        //prev chahiye or curr chahiye
        ListNode* prev=nullptr;
        ListNode* curr= mid;
        ListNode* newhead= getrev(mid,prev);
        ListNode* temp1= head;
        ListNode* temp2=newhead;
        //cmpare krna h odd or even list m 
        //even m koi dikkat nhi aayegi 
        //odd m mujhe temp1 jb tk null nhi hota bss jb tk chalana h
        //kyuki temp2 ki value odd m badi hoyegi
        while(temp1!= nullptr){
            if(temp1->val != temp2->val){
                return false;
            }
            else{
                //mtlb sb matched h 
                temp1= temp1->next;
                temp2= temp2->next;
            }
        }
        return true;
        //step 1 done
        //break krni h LL 
        
        
    }
};