class Solution {
public:
    int findcapacity(vector<int>&weights,int maxweight){
        int w=0,days=0;

        for(auto i:weights){
            w+=i;
            if(w==maxweight){
                w=0;
                days++;
            }else if(w>=maxweight){
                days++;
                w=i;
            }
        }
        if(w) days++;
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l=*max_element(weights.begin(),weights.end());
        int h=accumulate(weights.begin(),weights.end(),0);
        int ans=INT_MAX;
        while(l<=h){
            int capacity=l+(h-l)/2;
            int daystaken=findcapacity(weights,capacity); 
            if(daystaken>days){
                l=capacity+1;
            }else{
                ans=min(ans,capacity);
                h=capacity-1;
            }


        }

        return ans;
    }
};