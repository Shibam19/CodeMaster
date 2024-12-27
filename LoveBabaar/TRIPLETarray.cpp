#include<iostream>
using namespace std; 
void tripletSUMarray(int arr[],int size){
    int targetSUM;
    cin>>targetSUM;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==targetSUM){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
                
            }
        }
    }
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    tripletSUMarray(arr,size);
}