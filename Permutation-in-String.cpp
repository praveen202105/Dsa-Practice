class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>mp1,mp2;
        for(auto i:s1)mp1[i]++;
        int i=0,j=0;
        while(j<s2.size()){
            mp2[s2[j]]++;
            if((j-i)+1>s1.size()){
                mp2[s2[i]]--;
                if(mp2[s2[i]]==0)mp2.erase(s2[i]);
                i++;
            }
            if(mp2==mp1) return 1;
            j++;
        }

        return 0;
    }
};