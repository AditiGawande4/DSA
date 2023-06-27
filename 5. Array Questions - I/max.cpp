#include<iostream>
#include<climits>
#include<math.h>
using namespace std;

int main(){

    int arr[6]={8,0,5,34,26,92};
    int mx=INT_MIN;
    for(int i=0;i<6;i++){
    mx=max(mx,arr[i]);
    }
    cout<<"Max Element: "<<mx;
    return 0;
}