#include<bits/stdc++.h>
using namespace std;

int maxlen(int arr[],int n){
    unordered_map<int,int>mpp;
    int maxi=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0){
            maxi=i+1;
        }
        else{
            if(mpp.find(sum)!=mpp.end()){
                maxi=max(maxi,i-mpp[sum]);
            }
            else{
                mpp[sum]=i;
            }
        }
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxlen(arr,n);
    return 0;
}