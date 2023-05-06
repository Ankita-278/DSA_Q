#include<iostream>
using namespace std;

int missing_number(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=0;j<=n;i++){
            if(arr[j]==i)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        return i;
    }
}
int main(){
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<< missing_number(arr,n);
    return 0;
}