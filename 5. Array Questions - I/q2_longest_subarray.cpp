#include<iostream>
#include<climits>
#include<math.h>
using namespace std;

int main(){

    int arr[]={10,7,4,6,8,10,11};
    int pd,curr=2,ans=2, n=7, j=2;
    pd=arr[1]-arr[0];

while(j<n){
        if(pd==arr[j]-arr[j-1]){
            curr++;
        }
        else{
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        ans=max(ans,curr);
    j++;
    }

    cout<<"Max length of arithmetic subarray: "<<ans;

    return 0;
}