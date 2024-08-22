class Solution {
public:

bool isvowel(string s, char c){
    if(c=='a'||c=='e'|| c=='i'|| c=='o'|| c=='u'|| c=='A'||c=='E'|| c=='I'|| c=='O'|| c=='U')
    return true;
    else 
    return false;
}
    string reverseVowels(string s) {
       int l= s.length();
       char temp;
       int st=0;
       int e=l-1;
       while(st<e){
        if(!isvowel(s,s[st])){
            st++;
        }
        if(!isvowel(s,s[e])){
            e--;
        }
        if(isvowel(s,s[st]) && isvowel(s,s[e])){
            temp = s[st];
            s[st]= s[e];
            s[e]= temp;
            st++;
            e--;
        }
       }
       return s;
    }
};