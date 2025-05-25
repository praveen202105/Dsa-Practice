class Solution {
public:
    int totalsubarray(vector<int>&nums,int goal){
        int i=0,j=0,ans=0,sum=0;
        
        while(j<nums.size()){
            sum+=nums[j];
    
            while(sum>goal && i<=j){
                sum-=nums[i];
                i++;
            }

            ans+=((j-i)+1);
            j++;
        }

        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return totalsubarray(nums,goal)-totalsubarray(nums,goal-1);
        //total subarray upto sum goal -total subaarray upto sum goal-1
    }
};