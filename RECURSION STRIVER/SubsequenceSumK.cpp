#include<bits/stdc++.h>
using namespace std;

int func(int i, vector<int> &ds ,int sum,int k,int arr[], int n){
    if(i==n){
        if(sum==k){
            for(auto it:ds){
                cout<<it<<" ";
            }cout<<endl;
        }return 0;
    }
    
    ds.push_back(arr[i]);
    sum+=arr[i];
    func(i+1,ds,sum,k,arr,n);

    sum-=arr[i];
    ds.pop_back();
    func(i+1,ds,sum,k,arr,n);
}

int main(){
    vector<int>ds;
    int arr[3]={1,2,1};
    int n=3;
    int k=2;
    
    func(0,ds,0,k,arr,n);
    return 0;
}