class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int i;
        for(i=0;i<nums.size();++i){
            if(nums[i]<=i+1){
              break;
            }
          if(nums[i]==nums[i+1]{
              ans.push_back(nums[i]);
              i++;
          }
        }
      return ans;
    }
};
