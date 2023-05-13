#include<bits/stdc++.h>
using namespace std;

int longestsubarraywithsumk(int a[],long long k,int n){
    int left=0,right=0;
    long long sum=a[0];
    int maxlen=0;
    while(right<n){
        while(left<=right && sum>k){
            sum-=a[left];
            left++;
        }
        if(sum==k){
            maxlen=max(maxlen,right-left+1);
        }
        right++;
        if(right<n)
        sum+=a[right];
    }
    return maxlen;
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++){
           cin>>a[i];
    }
    int l=longestsubarraywithsumk(a,k,n);
    cout<<l;
    return 0;
}