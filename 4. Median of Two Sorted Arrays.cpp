class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size()+nums2.size();
        vector<int>nums3(n);
      merge(nums1.begin(), nums1.end(), nums2.begin(),nums2.end(),nums3.begin());

        int len=nums3.size();
         sort(nums3.begin(),nums3.end());
          if(len%2==1){
            int mid=((len)/2);
            return nums3[mid];
          }
           else{
            int oddmid=len/2;
            double h=(nums3[oddmid]+nums3[oddmid-1]);
            return ((h/2));
          }
    }
};
