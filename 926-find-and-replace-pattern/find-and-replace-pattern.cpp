class Solution {
public:

void normalise(string &str){
    char start = 'a';
    unordered_map<char,char> mapping;
    //chk krna h ki already present h ya nhi agr nhi h to mapping create krdo
    for(int i=0;i<str.length();i++){
        char strkacurrchar = str[i];
        if(mapping.find(strkacurrchar) == mapping.end()){
            //char not created
            mapping[strkacurrchar]= start;
            start++;
        }
    }
    //mapping create hogyi h ab normalise krnah 
    //mapping ki help se
    for(int i=0;i<str.length();i++){
        char normalisechar = mapping[str[i]];
        str[i]= normalisechar;
        }
}
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        //pattern ko nrmalise krdo
        normalise(pattern);
        
        //lets traverse and chk if ita = to pattern
        for(int i=0;i<words.size();i++){
            string currword = words[i];
            string copy= currword;
            normalise(copy);
            if(copy == pattern){
                //ans m store krna h word ko
                ans.push_back(currword);
            }
        }
        return ans;
    }
};