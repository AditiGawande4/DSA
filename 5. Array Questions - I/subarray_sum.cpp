#include<iostream>
using namespace std;

int main(){

    int arr[5]={1,2,7,0,2};
    int n=5, sum=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum<<endl;
        }
    }


    return 0;
}