class Solution {
public:

int expandthrucenter(int i, int j, string s){
    //this function returns the count of palindromic string
    int count=0;
    while(i>=0 && j<s.length()&& s[i]==s[j]){
        count++;
        i--;
        j++;
    }
    return count;
}

    int countSubstrings(string s) {
        int totalcount=0;
        for(int center=0;center<s.length();center++){
            //odd
            int i=center;
            int j=center;
            int oddpalcount= expandthrucenter(i,j,s);
            //even
            i=center;
            j=center+1;
            int evenpalcount = expandthrucenter(i,j,s);
            totalcount= totalcount+ evenpalcount+oddpalcount;
        }
        return totalcount;
    }
};