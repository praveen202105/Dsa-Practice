// User function Template for C++
class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        // code here
        // User function Template for C++
          int l=0,h=arr.size()-1;
         while(l<=h){
            int m=l+(h-l)/2;
            
            if(arr[m]<=target){
                l=m+1;
            }else{
                h=m-1;
            }
        }
        return l;
    }

        
    
};
