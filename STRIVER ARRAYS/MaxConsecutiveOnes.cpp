#include<bits/stdc++.h>
using namespace std;

int findlength(int arr[],int n){
    int cnt=0,maxi=0;
   // int prevcnt;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
            
        }
       else{
        //prevcnt=cnt;
        cnt=0;
       }
       maxi=max(maxi,cnt);
    }
     //maxi=max(maxi,prevcnt);
    return maxi;
}

int main(){
    int arr[8]={1,1,1,1,0,1,0,1};
    int n=8;
   int ans= findlength(arr,n);
   cout<<"ans is "<<ans<<endl;
}