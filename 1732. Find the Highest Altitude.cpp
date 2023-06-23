class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int count=0;
        vector<int> v;
        for(int i=0;i<gain.size();i++){
            count+=gain[i];
            v.push_back(count);
        }
            int c=v[0];
            for(int j=0;j<v.size();j++){
                if(c<v[j]){
                    c=v[j];
                }
            }
            if(c<0){
                return 0;
            }
            return c;
        }
    };
