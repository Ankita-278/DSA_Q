#include<iostream>
using namespace std;

  void sort012(int a[], int n)
    {
  int mid=0;
        int low=0;
        int high=n-1;
        while(mid<=high){
            if(a[mid]==0)
            swap(a[mid++],a[low++]);
            else if(a[mid]==1)
            mid++;
            else
            swap(a[mid],a[high--]);
        }
    }
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort012(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}