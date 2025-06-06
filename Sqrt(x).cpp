class Solution {
public:
    int mySqrt(int x) {
     int l=0,h=x!=1?x/2:x,ans=0;

     while(l<=h){
        long long m=l+(h-l)/2;
        if(m*m <=x){
            ans=m;
            l=m+1;
        }else{
           h= m-1;
        }
     }

     return ans;   
    }
};