#include<bits/stdc++.h>
using namespace std;
//maximum subarray sum....

int maxsubarraysum(int arr[],int n){
    int sum=0;
    int maxi=INT_MIN;
      int ansSTART=-1;
      int ansEND=-1;
      int start=0;
    for(int i=0;i<n;i++){
       if(sum==0){
           start=i;
        }
         sum=sum+arr[i];
       
        if(sum<0){
            sum=0;
        }
        
         
        if(sum>maxi){
            maxi=sum;
            ansSTART=start;
            ansEND=i;
        }
        if(maxi<0){
      maxi=0;
      }
    }
        cout<<"the subaray is "<<endl;
        for(int i=ansSTART;i<=ansEND;i++){
            cout<<arr[i]<<" ";
        }
    
    cout<<endl;
    return maxi;
}

int main(){
    int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
    int n=9;
   int ans= maxsubarraysum(arr,n);
   cout<<"the maximum subarray sum is "<<ans<<endl;
}