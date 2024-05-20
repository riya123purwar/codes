class Solution {
public:
    bool isValid(string s){
      stack<char> st;
      // '(',')','[',']','{','}'

      for(char ch:s){

        switch(ch){
            case '(':
              st.push(ch);
              break;

            case '{':
              st.push(ch);
              break;

            case '[':
              st.push(ch);
              break;

            case ')':
            if(!st.empty()&& st.top()=='(')
                st.pop();
            else
              return false;
            break; 

            case '}':
            if(!st.empty()&& st.top()=='{')
                st.pop();
            else
                return false;
            break;

            case ']':
            if(!st.empty()&& st.top()=='[')
                st.pop();
            else
                return false;
            break;
        }

    }
if(st.empty()) return true;
else return false;
    }
};
// int main(){
//     return 0;
// }