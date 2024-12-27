#include<iostream>
using namespace std;
void sort012(int arr[],int size){
    int low=0,mid=0,high=size-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int printARRAY(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[8]={1,2,0,0,2,1,2,0};
 
 
 sort012(arr,8);
 printARRAY(arr,8);
}

