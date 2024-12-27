#include<iostream>
using namespace std;

 bool check(int arr[],int n){
int count=0;
// 3 4 5 1 2 case
for(int i=1;i<n;i++){
    if(arr[i-1]>arr[i] ){
        count++;
    }
    }
    if( arr[n-1]>arr[0]){
        count++;
    }


if(count<=1){
    return 1;
}
else{ return 0;
 }
 }

 int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int  found=check(arr,n);
    if(found){
        cout<<"yes its sorted and rotated"<<endl;
    }

    else{
        cout<<"no its not sorted and rotated"<<endl;
    }
     }
