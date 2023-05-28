#include<bits/stdc++.h>
using namespace std;
int main(){
  int size;
  cin>>size;
  int arr[size];
  int i;
  for(i=0;i<size;i++){
    cin>>arr[i];
  }
  int start=0;
  int end=size-1;
  for(i=start;i<end;i++){
    if(start>end)
      break;
      cout<<arr[start]<<" ";
      cout<<arr[end]<<" ";
      start++;
      end--;
    
  }
 return 0;
}
