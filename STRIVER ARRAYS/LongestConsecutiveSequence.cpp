#include<bits/stdc++.h>
using namespace std;

vector<int> find(vector<int>arr){
int longest=1;
int cnt=0;
int n =arr.size();
unordered_set<int>st;
for(int i=0;i<n;i++){
    st.insert(arr[i]);
}
for(auto it:st){
    if(st.find(it-1)==st.end()){
        cnt=1;
        int x=it;
        while(st.find(x+1)!=st.end()){
            x++;
            cnt++;
            longest=max(longest,cnt);
        }
    }
   
}return longest;
}

int main(){
    vector<int>arr={200,1,100,3,2,4};
    int ans=find(arr);
    cout<<"longest length is "<< ans<<endl;
}