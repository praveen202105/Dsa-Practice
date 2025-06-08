class Solution {
public:
     bool canallocated(vector<int> &arr, int k ,int maxpages ){
        int student=1,sum=0;
        
        for(auto i:arr){
            if(sum+i<=maxpages){
                sum+=i;
            }else{
                student++;
                sum=i;
            }
        }
        
        return student<=k;
    }
    
    int splitArray(vector<int>& arr, int k) {
         if(arr.size()<k) return -1;
        // code here
     int l=*max_element(arr.begin(),arr.end());   
     int h=accumulate(arr.begin(),arr.end(),0);
     
     while(l<=h){
         int m=l+(h-l)/2;
         
         if(canallocated(arr,k,m))
             h=m-1;
         else l=m+1;
     }
     
     return l;
    
    }
};