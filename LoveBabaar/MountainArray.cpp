#include<iostream>
using namespace std;
int peakELEMENT(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return arr[e];
}
int main(){
    int arr[5]={1,5,6,4,2};
    peakELEMENT(arr,5);
    cout<<"peak element in mountain array is "<<peakELEMENT(arr,5)<<endl;

}