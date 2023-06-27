//Get the maximum subarray sum of a given array
//2. Prefix Sum Method

#include<iostream>
#include<vector>
#include<climits>
#include<math.h>
using namespace std;

int main(){

    int n=5;
    int arr[]={-1,4,-6,7,4};
    int currsum[6];
    currsum[0]=0;

    for(int i=1; i<=n;i++){
        currsum[i]=currsum[i-1]+arr[i-1];
    }

    int maxSum= INT_MIN;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=0;j<i;j++){
            sum=currsum[i]-currsum[j];
            maxSum=max(sum,maxSum);
        }

    }

    cout<<maxSum;
return 0;
}