#include<bits/stdc++.h>
using namespace std;

int sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

bool sum(int arr[],int n,int sumt){
    
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==sumt){
            return true;
        }
        else if(arr[i]+arr[j]<sumt){
            i++;
        }
        else{
            j--;
        }
    }return false;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,n);
    int sumt;
    cin>>sumt;
    int ans=sum(arr,n,sumt);
    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }
}
//TC is O(n+nlogn) and SC is O(1)....