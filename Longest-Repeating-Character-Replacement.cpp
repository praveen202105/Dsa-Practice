class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;

        int i=0,j=0,ans=0,maxcount=0;

        while(j<s.size()){
            mp[s[j]]++;
            maxcount=max(maxcount,mp[s[j]]);
            if(((j-i)+1)-maxcount > k && i<j){
                mp[s[i]]--;
                if(mp[s[i]]==0)mp.erase(s[i]);
                i++;
            }

            ans=max(ans,(j-i)+1);
            j++;
        }

        return ans;
    }
};