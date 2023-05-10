//Given a binary array arr of size N and an integer M. Find the maximum number of consecutive 1's produced by flipping at most M 0's.
#include<bits/stdc++.h>
using namespace std;

int findzeroes(int arr[],int n,int m){
    int j=0;
    int i;
    int flip=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
        {
        flip++;
        }
    while(flip>m)
    {
        if(arr[j]==0)
        {
            flip--;
        }
        j++;
    }
    ans=max(ans,i-j+1);
}
return ans;
}
int main(){
    int n,m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;
   int ans=findzeroes(arr,n,m);
   cout<<ans;
    return 0;
}