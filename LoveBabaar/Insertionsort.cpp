#include<iostream>
using namespace std;

int sort(int arr[],int n){
   //for rounds....
   for(int i=1;i<n;i++){
    int j=i-1;
    int temp=arr[i];
    for(j=i-1;j>=0;j--){
        if(arr[j]>temp){
            arr[j+1]=arr[j];
        }
        else{
            break;
        }
    }arr[j+1]=temp;
   }
}

int main(){
    int arr[5]={5,1,3,2,4};
    sort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}