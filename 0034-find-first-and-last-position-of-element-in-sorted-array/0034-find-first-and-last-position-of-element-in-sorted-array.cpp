class Solution {
public:

    int findleft(vector<int>&nums, int n)
    {
        int left=0 , right=nums.size()-1;
        int ans=-1;

        while (left<=right)
        {
            int mid = (left + right)/2;
            if (nums[mid]==n)
            {
                ans=mid;
                right=mid-1;
            }
            else if (nums[mid] > n)
            {
                right=mid-1;
            }
            else left = mid+1;
        }
        return ans;
    }

    int findright(vector<int>&nums,int n)
    {
        int left=0, right=nums.size()-1;
        int ans=-1;

        while (left <= right)
        {
            int mid= (left+right)/2;
            
            if (nums[mid]==n)
            {
                ans=mid;
                left=mid+1;
            }
            else if(nums[mid]>n)
            {
                right = mid-1;
            }
            else left = mid+1;
        }
        return ans;
    }


    vector<int> searchRange(vector<int>& nums, int target) {
        return {findleft(nums,target) , findright(nums,target)};
    }
};