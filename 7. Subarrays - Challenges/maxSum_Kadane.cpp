//Get the maximum subarray sum of a given array
//3. Kadane's algorithm Method

#include<iostream>
#include<vector>
#include<climits>
#include<math.h>
using namespace std;

int main(){

    int n=5;
    int arr[]={-1,4,-6,7,4};

    int currsum=0;
    int maxSum=INT_MIN;

    for(int i=0;i<n;i++){
        currsum+=arr[i];
        if(currsum<0){
            currsum=0;
        }
        maxSum=max(currsum,maxSum);
    }
    cout<<maxSum;
return 0;
}