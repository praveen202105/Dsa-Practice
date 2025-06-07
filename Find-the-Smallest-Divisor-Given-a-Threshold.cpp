class Solution {
public:
     int findthreshold(vector<int>&nums,int m){
        int ans=0;
        for(auto i:nums){
           ans+=(i/m);
           if(i%m)ans++;
        }
        return ans;
     }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1;
        int h=*max_element(nums.begin(),nums.end());
        int ans=INT_MAX;
        while(l<=h){
            int m=l+(h-l)/2;
            int mythreshold=findthreshold(nums,m);
            if(mythreshold>threshold){
                l=m+1;
            }else{
                ans=min(ans,m);
                h=m-1;
            }
        }
        return ans;
        
    }
};