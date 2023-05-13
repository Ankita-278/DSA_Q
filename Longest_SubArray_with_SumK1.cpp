#include<bits/stdc++.h>
using namespace std;
//better solution that is optimal for array having element +ve and -ve
int longestSubarratWithSumK(int a[],long long k,int n){

map <long long ,int> preSumMap;
long long sum=0;
int maxlen=0;
for(int i=0;i<n;i++){
sum+=a[i];
if(sum==k){
    maxlen=max(maxlen,i+1);
}
long long rem=sum-k;
if(preSumMap.find(rem)!=preSumMap.end()){
    int len=i-preSumMap[rem];
    maxlen=max(maxlen,len);
}
if(preSumMap.find(sum)==preSumMap.end())
{
preSumMap[sum]=i;
}
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
    int l=longestSubarratWithSumK(a,k,n);
    cout<<l;
    return 0;
}