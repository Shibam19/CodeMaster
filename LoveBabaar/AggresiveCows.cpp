#include<iostream>
using namespace std;

int max(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>arr[0]){
         max=arr[i];
        }
    }return max;
}

int min(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<arr[0]){
         min=arr[i];
        }
    }return min;
}

int sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
        }
    }
    }
}

bool ispossible(int arr[],int n,int c,int mid){
    int cowcount=1;
    int lastpos=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]-lastpos>=mid){
            cowcount++;
            if(cowcount=c){
                return true;
            }
            lastpos=arr[i];
        }
    }return false;
}

int aggresivecows(int arr[],int n,int c){
    sort(arr,n);
    int s=0;
    int e=(max(arr,n)-min(arr,n));
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(ispossible(arr,n,c,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;   
     }return ans;
}


int main(){
    int n;
    cout<<"enter no. of stalls: "<<endl;
    cin>>n;

    int c;
    cout<<"enter no. of cows:"<<endl;
    cin>>c;

    int arr[n];
    cout<<"enter value of stalls: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    
    cout<<"max distance between two cows is: "<<aggresivecows(arr,n,c)<<endl;
}
