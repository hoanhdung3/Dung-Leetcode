class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2!=0) return false;
        stack<char> st;
        for(char ch : s){
            if(ch=='}' || ch==']' || ch==')'){
                if(st.empty()) return false;
                else if(ch==']' && st.top()!='[') return false;
                else if(ch=='}' && st.top()!='{') return false;
                else if(ch==')' && st.top()!='(') return false;
                else st.pop();
            }
            else
                st.push(ch);
        }
        return (st.empty()) ? true : false;
    }
};
