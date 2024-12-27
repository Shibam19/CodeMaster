#include<bits/stdc++.h>
using namespace std;

int sort(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
                low++;
                mid++;            
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
                high--; 
        }
    }
}

int main(){
    int arr[7]={1,2,0,0,1,2,0};
    int n=7;
    sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//TC is O(n)and SC is O(1)......