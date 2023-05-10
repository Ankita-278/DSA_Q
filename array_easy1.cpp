////Find the element that appears once
#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int n){
     int maxi=arr[0];
     for(int i=0;i<n;i++){
         maxi=max(maxi,arr[i]);
     }
    int hash[maxi]={0};
     for(int i=0;i<n;i++){
         hash[arr[i]]++;
     }
     for(int i=0;i<n;i++){
         if(hash[arr[i]]==1)
          return arr[i];
     }
	    
	}
int main(){
      int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<search(arr,n);
    return 0;
}