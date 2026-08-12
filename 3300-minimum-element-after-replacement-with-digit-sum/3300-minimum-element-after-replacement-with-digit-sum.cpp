class Solution {
public:
int min=INT_MAX;
    int digit(int x)
    {
        int sum =0 ;
        while (x>0)
        {
            sum+=x%10;
            x/=10;
        }
        return sum;
    }

    int minElement(vector<int>& nums) {
        
        for (int i=0 ; i<nums.size() ; i++)
        {
            nums[i] = digit(nums[i]);
        }
        sort(nums.begin() , nums.end());
        return nums[0];
    }
};