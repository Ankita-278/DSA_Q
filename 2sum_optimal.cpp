//two pointer
#include<bits/stdc++.h>
using namespace std;

string read(int n,vector<int>arr,int target){
    int left=0,right=n-1;
    sort(arr.begin(),arr.end());
    while (left<right)
    {
        int sum=arr[left]+arr[right];
        if(sum==target){
            return "yes";
        }
        else if(sum<target)
        left++;
        else
        right--;
    }
    return "No";

    
}
int main(){
     int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
      string a=read(n,arr,target);
      cout<<a;
    return 0;
}