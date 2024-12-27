#include<iostream>
using namespace std;

int sort(int arr[],int n){
 for(int i=0;i<n-1;i++){
 //no of rounds....
bool swapped=false;
 
    for(int j=0;j<n-i-1;j++){
       
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped=true;
        }
       
    }
      if(swapped==false){
        break;
    } 
 }

}


int main(){
    int arr[6]={6,5,4,1,3,2};
    sort(arr,6);
     for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
        }
    
}