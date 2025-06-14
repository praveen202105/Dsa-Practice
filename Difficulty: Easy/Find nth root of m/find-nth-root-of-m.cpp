class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here.
        int l=1,h=m;
        
        while(l<=h){
            long long mid=l+(h-l)/2;
            if(pow(mid,n)==m) return mid;
            else if(pow(mid,n)<m) l=mid+1;
            else h=mid-1;
            
        }
        
        return -1;
    }
};