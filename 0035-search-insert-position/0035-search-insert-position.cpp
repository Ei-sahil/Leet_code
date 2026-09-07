class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0,j=n-1;
        int ans=n;

        while(i<=j){
            int mid=(i+j)/2;
            if(nums[mid]<target){
                i=mid+1;
                ans=mid+1;
            }
            else if(nums[mid]>target){
                j=mid-1;ans=mid;
            }
            else if(nums[mid]==target){
                ans=mid;break;
            }
        }
        return ans;
    }
};