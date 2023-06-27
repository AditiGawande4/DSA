//Get the maximum subarray sum of a given array
//4. Maximum Sum Circular Subarray

#include<iostream>
#include<vector>
#include<climits>
#include<math.h>
using namespace std;

int kadane(int arr[],int n){

    int currentsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        currentsum+=arr[i];
        if(currentsum<0){
            currentsum=0;
        }
        maxsum=max(maxsum,currentsum);
    }
    return maxsum;
}

int main(){
    int n=5;
    int arr[]={-1,4,-6,7,4};
    int wrapsum;
    int nonwrapsum;

    nonwrapsum=kadane(arr,n);
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }

    wrapsum=totalsum+kadane(arr,n);

    cout<<max(wrapsum,nonwrapsum);
    return 0;
}