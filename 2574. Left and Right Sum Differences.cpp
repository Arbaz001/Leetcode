class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        int left=0;
        int right=0;
        for(int i=0;i<nums.size();i++){
            right=right+nums[i];
        }
            for(int i=0;i<nums.size();i++){
                right=right-nums[i];
                ans.push_back(abs(left-right));
                 left=left+nums[i];
        }
        return ans;
    }
};
