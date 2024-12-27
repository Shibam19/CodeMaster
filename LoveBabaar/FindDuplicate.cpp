#include<iostream>
using namespace std;

int findDUPLICATE(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];

    }
    for(int i=1;i<size;i++){
     ans=ans^i;
    }
return ans;
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    findDUPLICATE(arr,size);
    cout<<"the duplicate elemenet is: "<<findDUPLICATE(arr,size)<<endl;
}