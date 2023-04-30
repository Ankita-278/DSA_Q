#include<bits/stdc++.h>
using namespace std;

vector<int>findArrayIntersection(vector<int>a,vector<int>b,int n,int m){
int i=0;
int j=0;
vector<int>ans;
while(i<n && j<m){
    if(a[i]<b[j]){
        i++;
    }
    else if(b[j]<a[i]){
        j++;
    }
    else{
        ans.push_back(a[i]);
        i++;
        j++;
    }
}
return ans;
}
int main(){
    vector<int>a={1,2,2,3,3,4,5,6};
    vector<int>b={2,3,3,5,6,6,7};
    //ans[]={2,3,3,5,6}
    vector<int>ans=findArrayIntersection(a,b,8,7);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}