#include<iostream>
using namespace std;
void FINDpairSUM(int arr[],int size){
    int targetSUM;
    cin>>targetSUM;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==targetSUM){
            cout<<i<<" "<<j<<endl;
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
  
    FINDpairSUM(arr,size);
    
}