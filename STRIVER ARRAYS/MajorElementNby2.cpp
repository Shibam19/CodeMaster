#include<bits/stdc++.h>
using namespace std;
//moore voting algorithm
int majorelement(int arr[],int n){
    int count=0;
    int element;
    for(int i=0;i<n;i++){
        if(count==0 ){
            count++;
            element=arr[i];
        }
        else if(arr[i]==element){
             count++;
        }
        else{
            count--;
        }
    }
    int count1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            count1++;        
        }
    }
    if(count1>n/2){
        return element;
    }
}

int main(){
    int arr[10]={4,4,2,4,3,4,4,3,2,4};
    int n=10;
    int ans=majorelement(arr,n);
    cout<<"ans is "<<ans<<endl;
}
//TC is O(n)and SC is O(1)....