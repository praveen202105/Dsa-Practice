class Solution {
public:
    int totalFruit(vector<int>& s) {
        unordered_map<int,int>mp;
        int ans=0;
        int i=0,j=0;
        for(int j=0;j<s.size();j++){
            mp[s[j]]++;
            while(mp.size()>2){
                mp[s[i]]--;
                if(mp[s[i]]==0)mp.erase(s[i]);
                i++;
            }
           if(mp.size()<=2) 
           ans=max(ans,(j-i)+1);

        }

        return ans;

    }
};