#include<iostream>
using namespace std;

int sumofELEMENTS(int arr[],int size){

int count=0;
for(int i=0;i<size;i++){
    count=count+arr[i];
}
return count;
}



int main(){
    int size;
    cout<<"enter the size of the array: "<<endl;
    cin>>size;
    cout<<endl;
    int arr[size];
    for(int i=0;i<size;i++){
cin>>arr[i];
    }
    cout<<endl;
    sumofELEMENTS(arr,size);
    cout<<"Sum of the Array elements are: "<<sumofELEMENTS(arr,size)<<endl;
    }