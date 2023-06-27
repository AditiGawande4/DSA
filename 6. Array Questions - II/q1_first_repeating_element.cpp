#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n=7;
    int a[]={1,5,3,4,3,5,6};

    int idx[]={-1,-1,-1,-1,-1,-1};
    int minidx=INT_MAX;
    for(int i=0;i<n;i++){
        if(idx[i]==-1){
        idx[i]=i;
        }
        else{
            if(idx[i]<minidx){
            minidx=idx[i];
            }
        }
        
    }

    cout<<"First Repeating Element: "<<a[minidx];
    return 0;
}