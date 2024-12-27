#include<bits/stdc++.h>
using namespace std;

int func(int i,vector<int>ds, int arr[],int n){
    if(i==n){
   for(auto it:ds)cout<<it<<" ";
    
   cout<<endl;
   return 0;
    }
    
    ds.push_back(arr[i]);
    //pick
    func(i+1,ds,arr,n);
    ds.pop_back();
    //not pick
    func(i+1,ds,arr,n);
    
}

int main(){
  int arr[3]={3,1,2};
  int n=3;
  vector<int>ds;
  func(0,ds,arr,n);
}