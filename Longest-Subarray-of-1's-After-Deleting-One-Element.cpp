class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int countone=0;
        int i=0,j=0,ans=0;

        while(j<nums.size()){
            if(nums[j]) countone++;
            if((j-i)+1 - countone >1 && i<j){
                if(nums[i])countone--;
                i++;
            }
            ans=max(ans,(j-i)+1);
            j++;
        }

        return ans?ans-1:0;

    }
};