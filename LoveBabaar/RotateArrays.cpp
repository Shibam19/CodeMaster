#include<iostream>
using namespace std;

int rotate(int arr[],int n,int k){
int temp[n];
for(int i=0;i<n;i++){
    temp[(i+k)%n]=arr[i];
}
for(int i=0;i<n;i++){
    cout<<temp[i]<<" ";
}
}



int main(){
    int arr[4]={11,12,13,14};
    int k;
    cout<<"enter the number by which to rotate:"<<endl;
    cin>>k;
   rotate(arr,4,k);
    
}