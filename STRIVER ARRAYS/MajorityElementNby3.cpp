#include<bits/stdc++.h>
using namespace std;

vector<int> majority(vector<int>arr){
    int n=arr.size();
    int cnt1=0;
    int cnt2=0;
    int el1=INT_MIN;
    int el2=INT_MIN;
    for(int i=0;i<n;i++){
        if(cnt1==0 && el2!=arr[i]){
            cnt1=1;
            el1=arr[i];
        }
        else if(cnt2==0 && el1!=arr[i]){
            cnt2=1;
            el2=arr[i];
        }
        else if(arr[i]==el1){
            cnt1++;
        }
        else if(arr[i]==el2){
            cnt2++;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }
    vector<int>res;
    cnt1=0;
    cnt2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==el1)cnt1++;
        if(arr[i]==el2)cnt2++;
    }
    int mini=(int)(n/3)+1;
    if(mini>=cnt1)res.push_back(el1);
    if(mini>=cnt2)res.push_back(el2);
    return res;
}

int main(){
    vector<int>arr={11,33,11,33,33,11};
    vector<int>ans=majority(arr);
    for(auto it:ans){
        cout<<it<<" ";
    }
}

