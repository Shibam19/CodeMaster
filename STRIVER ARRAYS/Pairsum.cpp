#include<bits/stdc++.h>
using namespace std;
//without hashing
int sum(int arr[],int n,int sumt){
   
    for(int i=0;i<n-1;i++)
{
    for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==sumt){
            cout<<i<<" "<<j<<endl;
        }
    }
}
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int sumt;
    cin>>sumt;
   sum(arr,n,sumt);
   
}
//TC is O(n2) and SC is O(1).....
