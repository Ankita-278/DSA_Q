#include<bits/stdc++.h>
using namespace std;

vector<int> findmissingrepeatingnumber(vector<int>a){
    int n=a.size();
    int hash[n+1]={0};
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    int repeating =-1,missing =-1;
    for(int i=1;i<=n;i++){
        if(hash[i]==2) repeating=i;
        else if(hash[i]==0) missing=i;
        if(repeating!=-1 && missing!=-1){
            break;
        }
    }
    return {repeating,missing};
}
int main(){
    vector<int>a={2,2};
    vector<int>ans=findmissingrepeatingnumber(a);
     cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
    return 0;
}