//optimal approach
#include<bits/stdc++.h>
using namespace std;

vector<int>sortedarray(vector<int>a,vector<int>b){
    int n1=a.size();
    int n2=b.size();
    int i=0,j=0;
    vector<int>unionarr;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(unionarr.empty() || unionarr.back()!=a[i]){
                unionarr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionarr.empty()|| unionarr.back()!=b[j]){
                unionarr.push_back(b[j]);
            }
            j++;
        }
    }
        while(i<n1){
            if(unionarr.empty() || unionarr.back()!=a[i]){
                unionarr.push_back(a[i]);
            }
            i++;
        }
        while(j<n2){
            if(unionarr.empty() || unionarr.back()!=b[j]){
                unionarr.push_back(b[j]);
            }
            j++;
        }
        return unionarr;
}
int main(){
 vector<int>a={1,2,3};
    vector<int>b={2,3,4,6};
       vector<int>temp=sortedarray(a,b);
       for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
       } 
    return 0;
}