#include<bits/stdc++.h>
using namespace std;

int f(int arr[],int l,int r){
    if(l>=r) return 0;
   else swap(arr[l],arr[r]);
    f(arr,l+1,r-1);
}

int main(){
   int arr[5]={1,2,3,4,5}; 
   int n=5;
   f(arr,0,n-1);
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}return 0;
}