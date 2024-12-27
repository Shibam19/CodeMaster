#include<iostream>
using namespace std;
int  SearchROTATED(int arr[],int n,int key){
int s=0;
int e=n-1;
int mid=s+(e-s)/2;
while(s<=e){
    if(arr[mid]==key){
        return mid;
    }
   else if(arr[s]<=arr[mid]){
        if(arr[s]<=key && key<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
        
    }
  

    else {
        if(arr[mid]<key && key<=arr[e]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        
        mid=s+(e-s)/2;
    }

}
return -1;
}





int main(){
    int key;
    cout<<"enter the key: "<<endl;
    cin>>key;
    int arr[5]={7,8,2,3,4};
    int found=SearchROTATED(arr,5,key);
     
    if (found) {
        cout << "Element found at index: " << found << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
}
