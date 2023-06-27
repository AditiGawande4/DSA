#include<iostream>
#include<vector>
using namespace std;

int main(){
    int st=-1,en=-1,sum=0, i=0,j=0;
    int s=12;
    int n=5;
    int a[]={1,2,3,7,5};
    while(j<n && sum+a[j]<=s){
        sum+=a[j];
        j++;
    }

    if(sum==s){
        cout<<"Answer "<<i+1<<" "<<j<<endl;
        return 0;
    }

    while(j<n){
        sum+=a[j];
        while(sum>s){
            sum-=a[i];
            i++;
        }
        if(sum==s){
            st=i+1;
            en=j+1;
            cout<<"Answer "<<st<<" "<<en<<endl;
        }
        j++;
    }
    return 0;

}