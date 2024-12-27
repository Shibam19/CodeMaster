#include<iostream>
using namespace std;

int firstOcc(int arr[],int n, int key){
    int s=0;
    int e=n-1;
    int mid=e+(s-e)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
          ans=mid;
          e=mid-1;
        }
        else if(key>arr[mid]){
          s=mid+1;
        }
        else{
          e=mid-1;
        }
          mid=s+(e-s)/2;
    }
    return ans;
}


int lastOcc(int arr[],int n, int key){
    int s=0;
    int e=n-1;
    int mid=e+(s-e)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
          ans=mid;
          s=mid+1;
        }
        else if(key>arr[mid]){
          s=mid+1;
        }
        else{
          e=mid-1;
        }
          mid=s+(e-s)/2;
    }
    return ans;
}


int main(){
    int arr[8]={1,1,3,3,3,3,5,6};

    int key;
      cout<<"enter the element u want to search "<<endl;
    cin>>key;
    firstOcc(arr,8,key);
     cout<<"the first occurence of key is index "<<firstOcc(arr,8,key)<<endl;
    lastOcc(arr,8,key);
      cout<<"the last occurence of key is index "<<lastOcc(arr,8,key)<<endl;
    return 0;
}