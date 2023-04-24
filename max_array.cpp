#include<bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr, int n)
    {
         int maxi=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>maxi){
                maxi=arr[i];
            }
        }
        return maxi;
    }
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<largest(arr,n);
   
    return 0;
}