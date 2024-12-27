#include<bits/stdc++.h>
using namespace std;

int maximumproductsubarray(int arr[],int n){
   int  prefix=1;
   int suffix=1;
   int maxi=0;
   for(int i=0;i<n;i++){
    prefix*=arr[i];
    suffix*=arr[n-i-1];
     if(prefix==0)prefix=1;
     if(suffix==0)suffix=1;
   int maxi1=max(prefix,suffix);
   maxi=max(maxi1,maxi);
   }return maxi;
}

int main(){
    int arr[6]={1,2,-3,0,-4,-5};
    int n=6;
    int ans=maximumproductsubarray(arr,n);
    cout<<"ans is "<<ans<<endl;
}