#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    private:
    bool countstudents(int A[],int N,int M,int pages){
        int student=1;
        long long pagestudent=0;
        for(int i=0;i<N;i++){
            if(A[i]>pages ) return false;
            if(pagestudent+A[i]>pages){
                student+=1;
                pagestudent=0;
                pagestudent+=A[i];
            }
            else{
                pagestudent+=A[i];
            }
        }
        if(student>M) return false;
        return true;
    }
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        if(M>N) return -1;
        int low=*max_element(A,A+N);
        int high=accumulate(A,A+N,0);
        while(low<=high){
            int mid=(low+high)/2;
            if(countstudents(A,N,M,mid)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
        
    }
};
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
      cin>>A[i];
    }
    int m;
    cin>>m;
    Solution obj;
    cout<<obj.findPages(A,n,m)<<endl;
    return 0;
}