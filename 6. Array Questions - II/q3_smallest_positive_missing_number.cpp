#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=5;
    int a[]={0,-10,1,3,-20};
    vector<int> check(n);
    for(int i=0;i<n;i++){
        check.push_back(0);
    }

    for(int i=0;i<n;i++){
        if(a[i]>=0){
            check[a[i]]=1;
        }
    }

    for(int i=0;i<n;i++){
        if(check[i]==0){
            cout<<"Smallest Positive Missing Number: "<<i<<endl;
            break;
        }
    }
    return 0;

}