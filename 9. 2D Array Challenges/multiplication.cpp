// Problem 2: Multiplying two 2-d arrays.

// Given two 2-Dimensional arrays of sizes n1Xn2 and n2Xn3. Your task is to
// multiply these matrices and output the multiplied matrix.
// Constraints
// 1 <= n1,n2,n3 <= 1,000

// Sample test case
// Input:
// a1[3][4]=[
//             [2,4,1,2],
//             [8,4,3,6],
//             [1,7,9,5]
//          ]

// a2[4][3]=[
//             [1,2,3],
//             [4,5,6],
//             [7,8,9],
//             [4,5,6]
//          ]

// Output:
// ans[3][3]=[
//             [33,42,51],
//             [69,90,111],
//             [112,134,156]
//           ]

// Approach
// 1. Make a nested loop of order 3. In the outer loop iterate over rows of the first matrix and in the inner loop iterate over columns of the second matrix.
// 2. Multiply rows of the first matrix with columns of the second matrix in the innermost loop and update in the answer matrix. 

#include<iostream>
using namespace std;

int main(){
    int n1=3, n2=4, n3=3;
int a1[3][4]={
        {2,4,1,2},
            {8,4,3,6},
            {1,7,9,5}};

int a2[4][3]={
            {1,2,3},
            {4,5,6},
            {7,8,9},
            {4,5,6}
         };

int ans[3][3];
for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++){
        ans[i][j]=0;
    }}

for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++){
        for(int k=0;k<n2;k++){
            ans[i][j]+=a1[i][k]*a2[k][j];
        }
    }
}

for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
    }
return 0;

}