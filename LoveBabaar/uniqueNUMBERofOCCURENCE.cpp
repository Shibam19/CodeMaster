#include<iostream>
using namespace std;
void sort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
bool UniqueNumberOfOccurences(int arr[],int size){
  
    for(int i=0;i<size;i+=count){
int newcount;
        int prevcount =1;
        for(int j=i+1;j<size;j++){
           if(arr[i]==arr[j]){
           int newcount= prevcount++;
           }
   }   
if(prevcount!=newcount){

}
 }
}

int main(){
    int size;
    cout<<"enter size: "<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    sort(arr,size);
    bool found=UniqueNumberOfOccurences(arr,size);
    if (found){
    cout<<"true "<<endl;
}

else{
cout<<"false"<<endl;
}
}