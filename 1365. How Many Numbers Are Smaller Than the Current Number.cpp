class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       int f=0;
       vector<int> g;
       for(int i=0;i<nums.size();i++){
           for(int j=0;j<nums.size();j++){
               if((nums[j]<nums[i]) && j!=i){
                   f++;
               }
            }
            g.push_back(f);
            f=0;
        }
        return g;
    }
};
