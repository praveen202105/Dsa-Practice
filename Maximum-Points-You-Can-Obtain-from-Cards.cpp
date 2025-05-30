class Solution {
public:
    int maxScore(vector<int>& card, int k) {
     int sz=card.size()-k;
     int sum=0,minsum=INT_MAX,totalsum=0;
     int i=0,j=0;

     while(j<card.size()){
        totalsum+=card[j];
        sum+=card[j];
        if((j-i)+1>sz && i<=j){
            sum-=card[i];
            i++;
        }
        if((j-i)+1==sz){
            minsum=min(minsum,sum);
        }
        j++;
     }

     return totalsum-minsum;   
    }
};