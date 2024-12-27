#include<bits/stdc++.h>
using namespace std;

vector<int>leaders(vector<int>arr){
     vector<int>ans;
    int n=arr.size();
      ans.push_back(arr[n-1]);
     int maxi=arr[n-1];
    
     for(int i=n-2;i>=0;i--){
        if(arr[i]>maxi){
        ans.push_back(arr[i]);
    maxi=arr[i];
        }
     }return ans;
}

int main(){
    vector<int>arr={10,22,12,3,0,6};
    
    vector<int>ans=leaders(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}