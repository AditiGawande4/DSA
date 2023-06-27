//Check if there exists two elements in an array such that their sum is equal to given k
// This solution is applicable only when the array is sorted. Time complexity is O(n)
// In the case of unsorted array, first we have to sort the array. Here we the sorting functions time complexity is higher then that will be time complexity for the code.

//6. Better time complexity for Pair Sum Problem

#include<iostream>
#include<vector>
#include<climits>
#include<math.h>
using namespace std;

bool pairsum(int arr[],int n, int k){
int low=0, high=n-1;

while(low<high){
    if(arr[low]+arr[high]==k){
        cout<<low<<" "<<high<<endl;
        return true;
    }
    else if(arr[low]+arr[high]>k){
        high--;
    }
    else{
        low++;
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