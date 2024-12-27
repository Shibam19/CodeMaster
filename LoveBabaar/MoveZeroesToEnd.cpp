#include<iostream>
using namespace std;

int move(int arr[],int n){
    int nonZERO=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
         swap(arr[i],arr[nonZERO]);
         nonZERO++;
        }
    }
}

void print(int arr[],int n){
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6]={1,0,6,5,0,0};

    move(arr,6);
    print(arr,6);
}