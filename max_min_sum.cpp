//Given an array A of size N of integers. Your task is to find the sum of minimum and maximum element in the array.
#include<iostream>
using namespace std;

int findSum(int A[], int N)
    {
    	int max=A[0];
    	for(int i=0;i<N;i++){
    	    if(max<A[i]){
    	        max=A[i];
    	    }
    	}
    	int min=A[0];
    	for(int i=0;i<N;i++){
    	    if(min>A[i]){
    	        min=A[i];
    	    }
    	}
    	int sum=0;
    	sum=max+min;
    	   return sum;
    }
 

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<findSum(a,n);
    return 0;
}