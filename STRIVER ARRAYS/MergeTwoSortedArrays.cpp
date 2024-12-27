#include<bits/stdc++.h>
using namespace std;

int mergearrays(int arr1[],int n,int arr2[],int m){
  int i=n-1;
  int j=0;
  while(i>=0 && j<m){
    if(arr1[i]>arr2[j]){
        swap(arr1[i],arr2[j]);
    }else{
        break;
    }
    i--;
    j++;
  }
  sort(arr1,arr1+n);
  sort(arr2,arr2+m);
}

int  main(){
    int n=4;
    int m=3;
    int arr1[4] = {1,4,8,10} ;
    int arr2[3] = {2,3,9};
    mergearrays(arr1,n,arr2,m);
    for(auto it:arr1){
        cout<<it<<" ";
    }cout<<endl;
    for(auto it:arr2){
        cout<<it<<" ";
    }
}