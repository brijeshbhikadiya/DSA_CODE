//aa panding che.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> duplicateElement(vector<int>& arr) 
{

   vector<int> ans;
    for(int i : arr){
        for(int j : arr){
            if(i==j){
                ans.push_back(i);
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> array1={1,2,2,3,3,4,5};

    cout<<duplicateElement(array1);
}
