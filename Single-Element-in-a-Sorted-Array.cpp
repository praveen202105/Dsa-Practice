class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

      int n=nums.size()-1;
        if(n<2 || nums[0]!=nums[1])return nums[0];

        if(n>1 && nums[n]!=nums[n-1])return nums[n];
        int l=1,h=n-2;        
        while(l<=h){
            int m=l+(h-l)/2;
            if(nums[m]!=nums[m-1] && nums[m]!=nums[m+1]) return nums[m];
            if((m%2 && nums[m]==nums[m-1])||(m%2==0 && nums[m]==nums[m+1])){//left me nhi hai
              l=m+1;
            }else{
                h=m-1;
            }
            
        }
        return -1;
    }
};