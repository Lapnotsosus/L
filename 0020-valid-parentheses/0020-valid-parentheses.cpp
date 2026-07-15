class Solution {
public:
    bool isValid(string s) {
        stack<char> o;

        for (char x : s)
        {
            if (x == '{' || x == '[' || x == '(' )
            o.push(x);
            else{
                if(o.empty()) return false;
                if (x==')'  && o.top()=='(')
                o.pop();
                else if (x=='}'  && o.top()=='{')
                o.pop();
                else if (x==']'  && o.top()=='[')
                o.pop();
                else
                return false;
            }
        }
        return o.empty();
    }
};