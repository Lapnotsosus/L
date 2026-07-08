class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        int digit;
        for (int n : nums)
        {
            digit=0;
            while(n>0)
            {
               digit++;
               n=n/10;
            }
            if(digit%2 == 0)
            count++;
        }
        return count;
    }
};