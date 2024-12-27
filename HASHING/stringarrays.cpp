#include<bits/stdc++.h>
using namespace std;
//lowercase
int main(){
string s;
cin>>s;
int n=s.size();
int hash[26]={0};
for(int i=0;i<n;i++){
    hash[s[i]-'a']++;
}
int q;
cin>>q;
while(q--){
    char ch;
    cin>>ch;
    //fetching
    cout<<"number of occurences is "<<hash[ch-'a']<<endl;
}
}