class Solution {
public:
     int daystobloom(vector<int>& bloomDay,int m,int k,int days){
      int c=0,seq=0;

      for(auto i:bloomDay){
        if(i<=days){
            seq++;
        }else{
            seq=0;
        }
        if(seq==k){
            c++;
            seq=0;
        }
      }
      
      return c>=m?c:-1;
     }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int l=*min_element(bloomDay.begin(),bloomDay.end());
        int h=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=INT_MAX;

        while(l<=h){
            int days=l+(h-l)/2;
            int mindays=daystobloom(bloomDay,m,k,days);
            if(mindays==-1){
                l=days+1;
            }else{
                // cout<<"Days "<<days<<" min days"<<mindays<<endl;
               if(mindays>=m) ans=min(ans,days);
                h=days-1;
            }

        }
        return ans==INT_MAX?-1:ans;
        
    }
};