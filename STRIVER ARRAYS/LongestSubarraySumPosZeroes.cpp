#include<bits/stdc++.h>
using namespace std;

int findlength(int arr[],int n,int k){
    int i=0;
    int j=0;
    int sum=0;
    int maxlen=0;
    sum=arr[0];
    while(j<n){
        while(i<=j && sum>k){
            sum=sum-arr[i];
            i++;
        }
       if(sum==k){
            maxlen=max(maxlen,j-i+1);
       }
       sum=sum+arr[j];
       j++;
       
}return maxlen;
}

int main(){
    int arr[5]={2, 3, 5, 1, 9};
    int n=5;
    int k=10;
    int ans =findlength(arr,n,k);
    cout<<"ans is "<<ans<<endl;
}
// every time the inner loop does not run for n times rather it can run for n times in total. So, the time complexity will be O(2*N) instead of O(N2).
//O(1) as we are not using any extra space.