#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

int main(){

    int a[]={1,2,0,7,2,0,2,2};
    int n=8;
    int mx=INT_MIN;
    vector<int> ans;
    for(int i=0;i<n;i++){
        
        if(a[i]>mx && a[i]>a[i+1]){
        ans.push_back(1);
        }
        else{
            ans.push_back(0);
        }
        mx=max(mx,a[i]);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}