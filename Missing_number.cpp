#include<iostream>
using namespace std;

int missingNumber(int A[], int N)
{
     int s2=(N*(N+1))/2;
    int sum=0;
    for(int i=0; i<N-1; i++){
        sum+=A[i];
    }
     return (s2-sum);
    


}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
   cout<< missingNumber(arr,n);

    return 0;
}