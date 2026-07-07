class Solution {
public:
    bool check(vector<int>& nums) {
         vector<int> og = nums;
        sort(nums.begin(),nums.end());
        
        int n;
        for (int i=0; i<nums.size(); i++)
        {
           
            if (og == nums )
            return true;
            n=nums[0];
            for (int j=0; j<nums.size()-1; j++)
            {
                nums[j]=nums[j+1];
            }
            nums[nums.size()-1] = n;
        }
        return false;
    }
};