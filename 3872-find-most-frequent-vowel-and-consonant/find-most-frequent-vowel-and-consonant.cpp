class Solution {
public:

bool is_vowel(char c){
    return c == 'a'||  c == 'e' ||  c == 'i' || c == 'o' || c =='u';
}

    int maxFreqSum(string s) {
        unordered_map<char,int>mp;
        for(auto ch: s){
            mp[ch]++;
        }

        int vowel=0, cons=0;
        for(char ch = 'a' ;ch <= 'z'; ch++){
            if(is_vowel (ch)){
                vowel = max(vowel,mp[ch]);
            }
            else{
                cons= max(cons, mp[ch]);
            }
        }
        return vowel+cons;

    }
};