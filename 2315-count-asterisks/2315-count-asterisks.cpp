class Solution {
public:
    int countAsterisks(string s) {
        stack<char>st;
        int count=0;
        for (char x : s)
        {
            if (x=='|' && st.empty())
            st.push(x);
            else if (x=='|' && !st.empty())
            st.pop();
            if (x=='*' && st.empty())
            count++;
        }
        return count;
    }
};