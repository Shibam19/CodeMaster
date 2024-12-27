#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int>v,int m)
{
int s=m+1,e=v.size()-1;
while(s<=e){
    swap(v[s],v[e]);
    s++;
    e--;
}return v;
}

void print(vector<int>v){ 
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int>v;
    

    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);      
    v.push_back(1);

int m;
cout<<"enter the index after which reverse happens: "<<endl;
cin>>m; 

    vector<int> ans=reverse(v,m);
    cout<<"answer is: "<<endl;
    print(ans);
}

