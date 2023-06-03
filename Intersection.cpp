#include<bits/stdc++.h>
using namespace std;
int main() {
   vector<int> a{1,2,3,4,5};
    vector<int> b{1,3,4};
    vector<int> ans;
    int i;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            if(a[i]==b[j]){
                ans.push_back(a[i]);
                
            }
        }
    }
   for(int i=0;i<ans.size();i++){
       cout<<ans[i]<<" ";
   }
    return 0;
}
