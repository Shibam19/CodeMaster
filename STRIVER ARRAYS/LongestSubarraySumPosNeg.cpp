//for only positives and negatives....
#include<bits/stdc++.h>
using namespace std;

int findlength(int arr[],int n,int k){
    map<int,int >mpp;
    int sum=0;
    int maxlen=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum==k){
            maxlen=max(maxlen,i+1);
        }
        int rem=sum-k;
        if(mpp.find(rem)!=mpp.end()){
            int len=i-mpp[rem];
            maxlen=max(maxlen,len);
        }
        if(mpp.find(sum)==mpp.end()){
            mpp[sum]=i;
        }
    } return maxlen;
}

int main(){
    int arr[5]={1, 2, 2, -1, 1 };
    int n=5;
    int k=4;
    int ans =findlength(arr,n,k);
    cout<<"ans is "<<ans<<endl;
}
//we are using a map data structure, the time complexity will be O(N*logN). The least complexity will be O(N) as we are using a loop to traverse the array.
//O(N) as we are using a map data structure. SC
