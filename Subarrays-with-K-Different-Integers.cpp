class Solution {
public:
    int findsubarray(vector<int>&nums,int k){

        unordered_map<int,int>mp;
        int i=0,j=0,ans=0;

        while(j<nums.size()){
            mp[nums[j]]++;
            while(mp.size()>k && i<=j){
                mp[nums[i]]--;
                if(mp[nums[i]]==0){
                    mp.erase(nums[i]);
                }
             i++;
            }
            ans+=((j-i)+1);
            j++;
        }

        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
        return findsubarray(nums,k)-findsubarray(nums,k-1);

    }
};