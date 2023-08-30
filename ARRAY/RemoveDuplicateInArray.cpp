#include <bits/stdc++.h> 

bool check(vector<int> arr,int i){
  for(int j = i-1; j>= 0;j--){
    if(arr[i] == arr[j])
      return false;
  }
  return true;
}
vector<int> removeDuplicates(vector<int> arr) {

  // Write your code here
  vector<int> ans;
  int i;
  for(i = 0; i<arr.size();i++){
      if(check(arr,i))
        ans.push_back(arr[i]);
    }
  return ans;
}