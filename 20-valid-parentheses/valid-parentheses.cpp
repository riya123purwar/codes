class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            char ch = s[i];
        
        //mere pass 2 cases h 
        //open bracket aata h to->stack m push krdia jaye
        //closed bracket aarha h to-> chk kia jaye ki st.top barabar h ya nhi
        if(ch == '('|| ch == '{' || ch == '['){
            st.push(ch);
        }
        else{
            if(!st.empty() && st.top()=='(' && ch == ')'){
                st.pop();
            }
            else if(!st.empty() && st.top ()== '{' && ch == '}'){
                st.pop();
            }
            else if(!st.empty() && st.top() == '[' && ch == ']'){
                st.pop();
            }
            else{
                return false;
            } 
        }
        }
        if(st.size()==0){
            return true;
        }
        else{
            return false;
        }
    }
};