class Solution {
  public:
  void findans(vector<int>&nums,int i,int subans,vector<int>&ans){
    if(i==nums.size()){
        ans.push_back(subans);
        return;
    }

    subans+=nums[i];
    findans(nums,i+1,subans,ans); 
    subans-=nums[i];
        findans(nums,i+1,subans,ans);
    

    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
     vector<int>ans;
     int subans=0;
     findans(arr,0,subans,ans);  
     return ans; 
    }
};