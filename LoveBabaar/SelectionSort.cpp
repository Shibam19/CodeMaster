#include<iostream>
using namespace std;
int sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
                }
                swap(arr[i],arr[minindex]);
        }
    }
}
    int main(){
    int arr[7]={7,6,5,4,3,2,1};
    sort(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
        }
    
}