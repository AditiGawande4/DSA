//Finding Max and Min element in an array
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    std::vector<int> vec(n); // Used vector here because an array needs a constant variable when initializing
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for(int i=0; i<n; i++){
        maxNo=max(maxNo, vec[i]);
        minNo=min(minNo,vec[i]);
    }

    cout<<"Max No:"<<maxNo<<" "<<"Min No:"<<minNo<<endl;
    return 0;
}