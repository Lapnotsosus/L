class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>st;
        for (int x : asteroids)
        {
            while (!st.empty() && x<0 && st.back()>0)
            {
                if (abs(x) > abs(st.back()))
                st.pop_back();
                else if (abs(x) == abs (st.back()))
                {
                    st.pop_back();
                    x=0;
                }
                else
                x=0;
            }
            if (x!=0)
            st.push_back(x);
        }
        return st;
    }
};