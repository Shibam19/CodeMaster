#include<bits/stdc++.h>
//#include<limit.h>
#include<iostream>
using namespace std;

int secondlargest(int arr[],int n){
  int largest=arr[0];
  int slargest=-1;
  for(int i=1;i<n;i++){
    if(arr[i]>largest){
        slargest=largest;
        largest=arr[i];
    }
    else if(arr[i]<largest && arr[i]>slargest){
        slargest=arr[i];
    }
  }return slargest;
}

int secondsmallest(int arr[],int n){
    int smallest=arr[0];
    int ssmallest=INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]!=smallest && arr[i]<ssmallest){
            ssmallest=arr[i];
        }
    }return ssmallest;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int ans1 =secondlargest(arr,n);
    cout<<"ans 1 is "<<ans1<<endl;
    int ans2 =secondsmallest(arr,n);
    cout<<"ans 2 is "<<ans2<<endl;

    return 0;
}
//time complexity is O(2N) and space is O(1)...