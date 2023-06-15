class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> v;
        vector<int> d;
        int k=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]%2==0){
                v.push_back(nums[i]);
                k++;
            }
            if(nums[i]%2!=0){
                d.push_back(nums[i]);
            }
        }
      for(int i=k;i<nums.size();++i){
          v.push_back(d[i-k]);
      }
      return v;
        
    }
};
