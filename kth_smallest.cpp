#include<bits/stdc++.h>
using namespace std;


//Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.


int kthSmallest(int arr[], int l, int r, int k) {
       priority_queue<int>pq;
       for(int i=0;i<=r;i++)
       pq.push(arr[i]);
       int ans=-1;
       while((r-k)>=0){
           pq.pop();
           k++;
       }
       ans=pq.top();
       return ans;
    }
int main(){
    int n;
    cin>>n;
    int arr[n];
    int l=0;
    int r=n;
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
            cin>>arr[i];
    }
    cout<<kthSmallest(arr,0,n-1,k);
    return 0;
}