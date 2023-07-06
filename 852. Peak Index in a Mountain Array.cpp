class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int peak=0;
        for(int i=1;i<arr.size()-1;i++){
            if(arr[0]<arr[i]){
                if(arr[i]>arr[peak]){
                  peak=i;
                }
            }
        }
        return peak;
    }
};
