class Solution {
public:

bool validpal(string s, int st ,int e){
    while(st<=e){
        if(s[st]!= s[e]){
            return false;
        }
        else{
            st++;
            e--;
        }
    }
    return true;
}

    bool validPalindrome(string s) {
        int l= s.length();
        int i=0;int j=l-1;
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                //koi ek dlt krna padega
                //i ko dlt kre
                bool one= validpal(s,i+1,j);
                //j ko dlt kre
                bool two= validpal(s,i,j-1);
                bool final= one|| two;
                return final;
            }
        }
        return true;
    }
};