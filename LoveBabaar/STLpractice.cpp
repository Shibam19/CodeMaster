//stl for arrays.....
#include<iostream>
#include<array>
#include<vector>

using namespace std;
int main(){
array<int,5> a={1,2,3,4,5};
int size=a.size();

//print array elements...
for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
//print mentioned element....
cout<<"element at 2nd index: "<<a.at(2)<<endl;

//empty or not...returns with bool...
cout<<"array is empty or not: "<<a.empty()<<endl;

//print first and last elelment of the array...
cout<<"first element: "<<a.front()<<endl;
cout<<"last element: "<<a.back()<<endl;


cout<<endl;
//stl for vectors....
//vector is dynamic...can inc.or dec. its size...
cout<<endl;


vector<int>v(5,2);
int n=v.size();
//printing vector array v....
for(int i=0;i<n;i++){
cout<<v[i]<<" ";
}
cout<<endl;
//checking capacity...
cout<<"capacity: "<<v.capacity()<<endl;

cout<<"size before new element: "<<v.size()<<endl; 

v.push_back(1);
//will double the size of vector after inserting extra element and delete the last one..
cout<<"capacity: "<<v.capacity()<<endl;
//checking size....
cout<<"size after new element: "<<v.size()<<endl;

//pop out of elements...
v.pop_back();
cout<<"new v is: "<<v.back()<<endl;
cout<<"first element is "<<v.front()<<endl;
cout<<"last element is "<<v.back()<<endl;

vector<int>p={5,4,3,1};
int m=p.size();
for(int i=0;i<m;i++){
    cout<<p[i]<<" ";
}
}
//done....
