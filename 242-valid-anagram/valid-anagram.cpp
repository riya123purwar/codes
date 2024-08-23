class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(), s.end());
        // sort(t.begin(),t.end());
        // if(s.compare(t)==0){
        //     return true;
        // }
        // else{
        //     return false;
        // }
        int freqtable[256]={0};
        for(int i=0;i<s.length();i++){
            freqtable[s[i]]++;//apne aap cnvrt hojayega int me
        }
         for(int i=0;i<t.length();i++){
            freqtable[t[i]]--;//apne aap cnvrt hojayega int me
        }
        for(int i=0;i<256;i++){
            if(freqtable[i]!=0){
                return false;
            }
        }
        return true;
    }
};