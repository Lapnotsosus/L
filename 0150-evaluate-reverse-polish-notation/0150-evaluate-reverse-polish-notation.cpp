class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int>v;
        for (string s : tokens)
        {
            if (s != "+" && s!="-" && s!= "/" && s!="*")
            {
                v.push_back(stoi(s));
            }
            else
            {
                int m = v[v.size()-1];
                int n = v[v.size()-2];
                if (s == "+")
                {
                    v.pop_back();
                    v[v.size()-1] = n+m;
                }
                else if (s == "-")
                {
                    v.pop_back();
                    v[v.size()-1] = n-m;
                }
                else if (s == "*")
                {
                    v.pop_back();
                    v[v.size()-1] = n*m;
                }
                else if (s == "/")
                {
                    v.pop_back();
                    v[v.size()-1] = n/m;
                }
            }
        }
        return v[0];
    }
};