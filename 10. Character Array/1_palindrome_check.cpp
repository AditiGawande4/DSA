// Challenge 1: Palindrom
// Problem: Check if a given word is a palindrome

#include<iostream>
using namespace std;

int main(){

int n=5;
char arr[6]="nitin";
bool flag=true;
for(int i=0;i<n;i++){

    if(arr[i]!=arr[n-1-i]){
        flag=false;
        break;
    }
}

if(flag){
    cout<<arr<<" is a palindrome"<<endl;
}
else{
    cout<<arr<<" is not a palindrome"<<endl;
}

return 0;
}