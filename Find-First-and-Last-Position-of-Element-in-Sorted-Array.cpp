class Solution {
public:
    void findfirstandlast(vector<int>& nums, int target,bool findfirst,vector<int>&ans){
     int l=0,h=nums.size()-1;

     while(l<=h){
        int m=l+(h-l)/2;
        if(nums[m]==target){
            if(findfirst){
                ans[0]=m;
                h=m-1;
            }else{
                ans[1]=m;
                l=m+1;
            }
        }else if(nums[m]>target){
          h=m-1;
        }else{
          l=m+1;
        }
     }
    }
    vector<int> searchRange(vector<int>& nums, int target) {
     vector<int>ans(2,-1);
     findfirstandlast(nums,target,1,ans);
     findfirstandlast(nums,target,0,ans);
     return ans;   
    }
};