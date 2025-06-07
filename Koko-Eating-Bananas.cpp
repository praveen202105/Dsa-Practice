class Solution {
public:
    int longestMountain(vector<int>& nums) {
        int n=nums.size();
        if(n<3)return 0;
        int left=0,right=0;
        int temp=0,ans=0;

        for(int i=1;i<n-1;i++){

            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                left=i,right=i;
                while(left>0 && nums[left]>nums[left-1]){
                    left--;
                }
                while(right<n-1 && nums[right]>nums[right+1]){
                    right++;
                }


                ans=max((right-left)+1,ans);

            }
        }

        return ans;
    }
};