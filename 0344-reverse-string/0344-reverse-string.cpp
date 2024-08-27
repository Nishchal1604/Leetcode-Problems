class Solution {
public:
    void reverseString(vector<char>& s) {

        stack<char> st;
        for(char c:s){
            st.push(c);

        }
        for (int i = 0; i < s.size(); i++) {
            s[i] = st.top();  // Get the top character from the stack
            st.pop();          // Remove the top character from the stack
        }
    }
};