class Solution {
public:
    int numSubarraysWithSum(vector<int>& arr, int target) {
       unordered_map<int,int>mp;
        int s=0,ans=0;
        
        for(auto i:arr){
            s+=i; 
            if(s==target)ans++; 
            ans+=mp[s-target];
            mp[s]++;
            
        }
        
        return ans;
    }
};