#include<iostream>
using namespace std;

int reverseARRAY(int arr[],int size){
    int start=0;
    int end=(size-1);
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int printARRAY(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[6]={0,11,-9,7,77,8};
    int brr[5]={1,4,-7,22,67};

    reverseARRAY(arr,6);
    reverseARRAY(brr,5);

    printARRAY(arr,6);
    cout<<endl;
    printARRAY(brr,5);

}