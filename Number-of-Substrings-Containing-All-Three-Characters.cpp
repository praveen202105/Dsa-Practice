class Solution {
public:
    int totalsubarray(string nums,int maxchar){
        int i=0,j=0,ans=0;
        unordered_map<char,int>mp;
        while(j<nums.size()){
            mp[nums[j]]++;
    
            while(mp.size()>maxchar && i<=j){
                mp[nums[i]]--;
                if(mp[nums[i]]==0)mp.erase(nums[i]);
                i++;
            }

            ans+=((j-i)+1);
            j++;
        }

        return ans;
    }
    int numberOfSubstrings(string s) {
        return totalsubarray(s,3)-totalsubarray(s,2);
    }
};