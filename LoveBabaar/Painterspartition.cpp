#include<iostream>
using namespace std;

bool ispossible(int arr[],int n,int k,int mid){
int painterscount=1;
int lengthsumofboard=0;
for(int i=0;i<n;i++){
    if(lengthsumofboard+arr[i]<=mid){
        lengthsumofboard+=arr[i];
    }else
    {
        painterscount++;
        if(painterscount>k || arr[i]>mid)
    {
            return false;
        }
    lengthsumofboard=arr[i];
    }
}return true;
}

int painterpartition(int arr[],int n,int k){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(ispossible(arr,n,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }mid=s+(e-s)/2;
    }return ans;
}

int main(){
    int n;
    cout<<"enter no. of boards: "<<endl;
    cin>>n;

    int k;
    cout<<"enter no. of painters: "<<endl;
    cin>>k;
    k<n;
    int arr[n];
    cout<<"enter each board's length: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"minimum time is: "<<painterpartition(arr,n,k)<<endl;
}