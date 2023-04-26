#include<iostream>
using namespace std;

//Given an array arr[] of size N, check if it is sorted in non-decreasing order or not.
bool arraySortedOrNot(int arr[], int n) {
    bool issorted=true;
    for(int i=1;i<n;i++){
    if(arr[i]<arr[i-1]){
    issorted=false;
    return issorted;
    }
    }
    return issorted;
    }
int main(){
            int n;
            cin>>n;
            int arr[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            cout<<arraySortedOrNot(arr,n);
    
    return 0;
}