#include<bits/stdc++.h>
using namespace std;
//brute force approach
vector<int>sortedunion(vector<int>a,vector<int>b){
    int n1=a.size();
    int n2=b.size();
    set<int>st;
    for(int i=0;i<n1;i++){
        st.insert(a[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(b[i]);
    }
    vector<int>uni;
    for(auto it:st){
        uni.push_back(it);
    }
    return uni;
}
int main(){
    vector<int>a={1,2,3};
    vector<int>b={2,3,4,6};
       vector<int>temp=sortedunion(a,b);
       for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
       }
          


    return 0;
}
