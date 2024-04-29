class Solution {
public:
    bool isPalindrome(int x) {
        int r=x;
        long long s=0;
        if(r==0) return true;
        while(x>0){
            int last= x%10;
            x=x/10;
            s= (s*10)+last;
            if(r>INT_MAX||r<INT_MIN) return false; 
            if(s == r)
            {
                // cout<<"true";
                return true;
            }
        }
        // cout<<"false";
        return false;
    }
};