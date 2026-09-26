class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mp;
        for(auto x : knowledge)
        mp[x[0]] = x[1];
        string ans="";
        string currkey="";
        bool inside = false;
        for (char x : s)
        {
            if (x == '(')
            {
                inside = true;
            }
            else if (x==')')
            {   
                inside = false;
                if (mp.count(currkey))
                ans+=mp[currkey];
                else
                ans+='?';
                currkey="";
            }
            else if  (inside)
            {
                currkey+=x;
            }
            else
            ans+=x;
        }
        return ans;
    }
};