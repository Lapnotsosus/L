class Solution {
public:
    int maxDepth(string s) {
        int mx=0;
        stack<char>st;
        for (char x : s)
        {
            if (x == '(')
            {
                st.push(x);
            }
            else if (x == ')' && !st.empty())
            {
                mx = max(mx , (int)st.size());
                st.pop();
            }
        }
        return mx-st.size();
    }
};