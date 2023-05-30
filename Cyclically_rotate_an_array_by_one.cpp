#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{
     int temp;
    for(int i = 0; i < n; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-1];
        arr[n-1] = temp;
    } 
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotate(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}