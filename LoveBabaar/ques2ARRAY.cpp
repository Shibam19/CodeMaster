#include<iostream>
using namespace std;
int findtheNUMBER(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}


int main(){
    int size;
    cin>>size;
int arr[size];
for(int i=0;i<size;i++){
cin>>arr[i];
}
findtheNUMBER(arr,size);
cout<<"the element to appear once is: "<<findtheNUMBER(arr,size)<<endl;
}