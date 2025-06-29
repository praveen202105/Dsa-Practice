class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
      set<long long>w; //window

      for(int i=0;i<nums.size();i++){
        auto element=w.lower_bound(nums[i]-valueDiff);
        if(element!=w.end() && abs(*element-nums[i])<=valueDiff) return 1;
        w.insert(nums[i]);

        if(i>=indexDiff){
            
            w.erase(nums[i-indexDiff]);
        }

      }

      return 0;

    }
};