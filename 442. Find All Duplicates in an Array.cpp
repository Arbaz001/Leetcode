class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int i;
        for(i=0;i<nums.size();++i){
         int x=abs(nums[i]);
         x--;
         if(nums[x]<0){
             ans.push_back(x+1);
         }
         else{
             nums[x]=nums[x]*-1;
            }
        }
      return ans;
    }
};
