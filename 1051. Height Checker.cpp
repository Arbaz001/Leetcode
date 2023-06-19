class Solution {
public:
    int heightChecker(vector<int>& nums) {
        int c=0;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
        v.push_back(nums[i]);
        }
        sort(nums.begin(),nums.end());
          for(int i=0;i<nums.size();i++){
              if(nums[i]!=v[i]){
                  c++;
              }
              else
              {
                  c==0;
              }
          }
          return c;
        
    }
};
