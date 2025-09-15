class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
         stringstream ss(text);
        string word;
        int brokenWords = 0, totalWords = 0;

        while (ss >> word) {   // split into words
            totalWords++;
            for (char c : word) {
                if (brokenLetters.find(c) != string::npos) { 
                    // found broken letter in this word
                    brokenWords++;
                    break;
                }
            }
        }
        return totalWords - brokenWords;
    
    }
};