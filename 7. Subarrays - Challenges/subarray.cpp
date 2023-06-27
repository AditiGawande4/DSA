//Get the maximum subarray sum of a given array
//1. Brute Force Method
#include<iostream>
#include<vector>
#include<climits>
#include<math.h>
using namespace std;

int main(){

    int n=5;
    int a[]={-1,4,-6,7,4};
    int j=0,sum=0, mx=INT_MIN;

    vector<int> b;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum=0;
            for(int k=i;k<=j;k++){
                sum+=a[k];
            }
            mx=max(mx,sum);
        }
    }
    cout<<mx;
return 0;
}