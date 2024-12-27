#include<iostream>
using namespace std;

void findINTERSECTION(int arr1[],int n,int arr2[], int m){
int i=0,j=0;
    
 while(i<n && j<m) { 
        if(arr1[i]<arr2[j]){
            
          i++;
          
        }
        else if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else{
            j++;
        }
    }
}


int main(){
    int n=6;
    int m=5;
    
    int arr1[n]={1,2,2,2,3,4};
    int arr2[m]={2,2,3,3,4};

    findINTERSECTION(arr1,n,arr2,m);
    
    return 0;
}
