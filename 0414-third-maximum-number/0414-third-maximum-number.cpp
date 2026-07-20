class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s;
        for(int x : nums)
        s.insert(x);

        if(s.size() > 2) return *prev(s.end(),3);
        else return *prev(s.end());
    }
};