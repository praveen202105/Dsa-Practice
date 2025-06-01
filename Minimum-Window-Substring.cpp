class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size()>t.size())return \\;
        int total=0,minlen=s.size(),i=0,j=0,start=-1;
        unordered_map<char,int>org;
        for(auto i:t)org[i]++;;

        total=org.size();
        
        while(j<s.size()){
            if(org.count(s[j])>=0){
                org[s[j]]--;
                if(org[s[j]]==0) total--;
            }
            
            while(total==0 && i<=j){
                
                if((j-i+1)<=minlen){
                    minlen=(j-i+1);
                    start=i;  
                }
                  if(org.count(s[i])>=0){
                    if(org[s[i]]==0)total++;
                    org[s[i]]++;
                 }
                i++;
            }

            j++;
        }
   return start==-1?\\:s.substr(start,minlen);
    }
};