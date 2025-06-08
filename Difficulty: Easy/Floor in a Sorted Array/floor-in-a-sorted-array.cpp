class Solution {
  public:

    int findFloor(vector<int>& arr, int x) {
        // Your code here
        int l=0,h=arr.size()-1;
        while(l<=h){
            int m=l+(h-l)/2;
            
            if(arr[m]<=x){
                l=m+1;
            }else{
                h=m-1;
            }
        }
        return h;
    }
};
