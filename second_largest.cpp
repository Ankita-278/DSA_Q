//Given an array Arr of size N, print second largest distinct element from an array.
#include<bits/stdc++.h>
using namespace std;

int print2largest(int arr[], int n) {
	    int maxi=INT_MIN;
	    for(int i=0;i<n;i++){
	        if(arr[i]>maxi){
	            maxi=arr[i];
	        }
	    }
	    int secmax=INT_MIN;
	    for(int i=0;i<n;i++){
	        if(arr[i]>secmax && arr[i]!=maxi)
	        {
	            secmax=arr[i];
	        }
	    }
	   if(secmax!=INT_MIN){
	    return secmax;
	   }
	   else
	   {
	       return -1;
	   }
	}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<print2largest(arr,n);
    return 0;
}