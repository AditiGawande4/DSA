// Challenge 2: Largest Word in a Sentence

// Problem: We have to find the largest word in a sentence.

#include<iostream>
#include<climits>
#include<math.h>
using namespace std;

int main(){

    int n=16;
    char arr[17]="My name is Aditi";

    int i=0,max_len=INT_MIN, curr_len=0;
    int st=0,maxst=0;// Can considder st analogous to curr_len and maxst analogous to max_len.
    while(1){

        
        if(arr[i]==' ' || arr[i] == '\0'){
            if(curr_len>max_len){
                max_len=curr_len;
                maxst=st;
            }
            curr_len=0;
            st=i+1;
        }
        else{
        curr_len++;
        }
        if(arr[i]=='\0'){
            break;
        }
        
        i++;
    }

    cout<<max_len<<endl;
    for(int i=0;i<max_len;i++){
        cout<<arr[i+maxst];
    }
}