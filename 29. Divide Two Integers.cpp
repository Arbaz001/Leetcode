class Solution {
public:
    int divide(long long int dividend, long long int divisor) {
        long long int ans;
        ans=(dividend/divisor);
        if(ans>2147483647){
            return 2147483647;
            
        }
        else{
            return ans;
        }
    }
};
