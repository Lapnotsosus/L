class Solution {
public:
    string simplifyPath(string path) {
       stack<string>st;
       stringstream ss(path);
       string s;
       while (getline(ss , s , '/'))
       {
        if (s== "." || s=="")
        {
            continue;
        }
        if(s=="..")
        {
            if(!st.empty())
            st.pop();
        }
        else
        st.push(s);
       }
       string ans="";
       stack<string>s2;
       while (!st.empty())
       {
        s2.push(st.top());
        st.pop();
       }
       while (!s2.empty())
       {
            ans+="/"+s2.top();
            s2.pop();
       }
       if (ans == "")
       return "/";
       return ans;
    }
};