#include<iostream>
using namespace std;

int findallduplicates(int arr[],int size){
    int i,j;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
            }
        }
    }
}


int main(){
    int size;
    cout<<"enter the size: "<<endl;
    cin>>size;

    int arr[size];
    
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    findallduplicates(arr,size);
}