#include<iostream>
using namespace std;

int binarySEARCH(int arr[],int size,int key){
    int start=0;
    int end=size-1;
int mid=start+(end-start)/2;
while(start<=end){
if(arr[mid]==key){
    return mid;
}
//right m jao...
if(arr[mid]>key){
    end=mid-1;
}
//left m jao...
else{
    start=mid+1;
}

mid=start+(end-start)/2;
}
return -1;
}

int main(){
    int arr[8]={1,2,5,6,11,88,89,91};
    int key;
    cout<<"enter the key u want to check "<<endl;
    cin>>key;
    
    int index=binarySEARCH(arr,8,key);
    cout<<"index of key is "<<index<<endl;
    return 0;
}