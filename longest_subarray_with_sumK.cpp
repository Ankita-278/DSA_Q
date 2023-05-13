//brute force
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int len=0;
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=0;j<n;j++){
            s=s+arr[j];
        if(s==k)
        len=max(len,j-i+1);
    }
    }
    cout<<len;
    return 0;
}