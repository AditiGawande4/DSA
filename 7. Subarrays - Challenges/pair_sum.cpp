//Check if there exists two elements in an array such that their sum is equal to given k
//5. Pair Sum Problem

#include<iostream>
#include<vector>
#include<climits>
#include<math.h>
using namespace std;

bool pairsum(int arr[],int n, int k){
    int sum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if((arr[i]+arr[j])==k){
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[]={2,4,7,11,14,16,20,21};
    int k=31;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<pairsum(arr,n,k);
    return 0;
}