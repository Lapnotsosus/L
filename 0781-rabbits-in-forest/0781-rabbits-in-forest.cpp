class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int>map;
        for (int x : answers)
        map[x]++;
        int num=0;
        for (auto [x,count] : map)
        {
            int groupsize = x+1;

            int group = (count + groupsize -1)/groupsize;

            num+=groupsize * group;
        }
        return num;
    }
};