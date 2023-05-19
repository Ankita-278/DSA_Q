//The cost of stock on each day is given in an array A[] of size N. Find all the days on which you buy and sell the stock so that in between those days your profit is maximum.

//Note: Output format is as follows - (buy_day sell_day) (buy_day sell_day)
//For each input, the output should be in a single line, i.e. It's important to move to a new/next line for printing the output of other test cases.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int price[n];
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    int i=0,start=0,end=0;
    while(i<n-1 && price[i]>price[i+1])
        i++;
        int flag=0;
        while(i<n-1){
            start=i;
            while (i<n-1 && price[i]<price[i+1])
               i++;
               end=i;
               if(start!=end){
                cout<<"("<<start<<" "<<end<<")";
                   flag=1;
               }
            i++;
            
        }
        if(!flag){
            cout<<"NO profit"<<endl;
        }
        else{
            cout<<endl;
        }
    
    return 0;
}
