//print upto given row no triangle....

#include <bits/stdc++.h>
using namespace std;

vector<int>generateROW(int r){
    long long res=1;
    vector<int>ansROW;
    ansROW.push_back(1);
    for(int c=1;c<r;c++){
        res=res*(r-c);
        res=res/c;
        ansROW.push_back(res);
    }return ansROW;
}


vector<vector<int>> pascaltriangle(int r){
    vector<vector<int>>ans1;
    for(int i=1;i<=r;i++){
       ans1.push_back(generateROW(i));
    }return ans1;
}

int main()
{
    int r = 5;
    vector<vector<int>>ans=pascaltriangle(r);
    for(auto it:ans){
        for(auto element:it){
            cout<<element<<" ";
        }cout<<endl;
    }
}
