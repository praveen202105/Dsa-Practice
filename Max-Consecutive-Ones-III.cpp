class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0,ans=0,z=0;
        while(j<nums.size()){
          if(nums[j]==0)z++;
          while(z>k && i<j){
           if(nums[i]==0)z--;
           i++;
          }
          if(z<=k)ans=max(ans,(j-i)+1);
       j++;
        }

        return ans;
    }
};