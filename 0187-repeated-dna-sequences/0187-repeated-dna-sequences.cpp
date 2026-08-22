class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if (s.size()<10) return {};

        unordered_map<string, int> map;
        vector<string> ans;

        for (int i = 0; i <= s.size() - 10; i++) {
            string curr = s.substr(i, 10);

            map[curr]++;

            if (map[curr] == 2)
            ans.push_back(curr);
        }

        return ans;
    }
};