//hashing
#include<bits/stdc++.h>
using namespace std;

vector<int> read(int n,vector<int>arr,int target){
        map<int,int>mpp;
        int i;
        for(int i=0;i<n;i++){
            int a=arr[i];
            int more=target-a;
            if(mpp.find(more)!=mpp.end()){
                return {mpp[more],i};
            }
            mpp[a]=i;
        }
        return {-1,-1};
}
int main(){
     int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> ans = read(n, arr, target);
    cout << "This is the answer for variant 2: [" << ans[0] << ", "<< ans[1] << "]" << endl;
    return 0;
    return 0;
}