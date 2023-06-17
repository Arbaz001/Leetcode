class Solution {
public:
    double average(vector<int>& salary){
        sort(salary.begin(),salary.end());
        salary.erase(salary.begin());
        salary.erase(salary.begin()+(salary.size()-1));
        int n=salary.size();
         double sum=accumulate(salary.begin(),salary.end(),0);
         double h=sum/n;
         return h;
    }
};
