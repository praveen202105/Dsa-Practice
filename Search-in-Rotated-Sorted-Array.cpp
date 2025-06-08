class Solution {
public:
int findMin(vector<int>& nums) {
        int l=0,h=nums.size()-1;

        while(l<h){
            int m=l+(h-l)/2;
            if(nums[m]>nums[h]){
                l=m+1;
            }else{
                h=m;
            }
        }

        return l;
    }
    int search(vector<int>& nums, int target) {
     int l=findMin(nums);   
     int h=nums.size()-1;

     while(l<=h){
        int m=l+(h-l)/2;
        if(nums[m]==target){
            return m;
        }
        else if(target>nums[h]){
            h=l-1;
            l=0;
        }else if(nums[m]<target){
            l=m+1;
        }else{
            h=m-1;
        }
     }
     return -1;
    }
};