class Solution {
public:
     int totalsubarray(vector<int>&nums,int k){
        int i=0,j=0,ans=0,odd=0;
        
        while(j<nums.size()){
            if(nums[j]%2)odd++;
            while(odd>k && i<=j){
               if(nums[i]%2)odd--;
                i++;
            }

            ans+=((j-i)+1);
            j++;
        }

        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return totalsubarray(nums,k)-totalsubarray(nums,k-1);
    }
};