//Find the element that appears once
#include<iostream>
using namespace std;
//brute approach
int appears_once(int arr[],int n){
    int num, count=0;
    for(int i=0;i<n;i++){
        int num=arr[i];
         count=0;

    for(int j=0;j<n;j++){
        if(arr[j]==num)
        count++;
    }
    }
        if(count==1)
        return num;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<appears_once(arr,n);
    return 0;
}