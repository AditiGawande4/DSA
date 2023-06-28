// Challenge 3 - 2D matrix Search
// Problem:
// Given a nxm matrix. Write an algorithm to find that the given value exists in the matrix or not. Integers in each row are sorted in ascending from left to right. Integers in each column are sorted in ascending from top to bottom.

// Constraints
// 1 <= N,M <= 1,000

// Sample Test Case:
// Consider the following matrix:
// [
// [1, 4, 7, 11, 15],
// [2, 5, 8, 12, 19],
// [3, 6, 9, 16, 22],
// [10, 13, 14, 17, 24],
// [18, 21, 23, 26, 30]
// ]
// Given target = 5, return true.

// Given target = 20, return false.

// Brute Force Approach
// Linear search in a 2D Array.
// Code:
// #include "iostream"
// using namespace std;
// int32_t main() {
// int n, m; cin >> n >> m;
// int target; cin >> target;
// int mat[n][m];
// for (int i = 0; i < n; i++) {
// for (int j = 0; j < m; j++) {
// cin >> mat[i][j];
// }
// }
// bool found = false;
// for (int i = 0; i < n; i++) {
// for (int j = 0; j < m; j++) {
// if (mat[i][j] == target)
// found = true;
// }
// }
// if (found)
// cout << "Found";
// else
// cout << "Not Found";
// }

// Time complexity : O(N*M)

// So we need to find an optimized method.

// Optimised Approach [IMP]
// 1. Start from the top right element. ( We can also start from bottom left element. But we can't start from top left and bottom right as we will have 2 same options of traversal from there)
// 2. You are at (r,c)
// if(matrix[r][c] == target)
// return true
// If (matrix[r][c] > target)
// c--
// else
// r++;

// At (r,c), you can go to (r-1,c) or (r,c-1), depending on the value of matrix[i][j]
// and target.

#include<iostream>
using namespace std;

int main(){

    int n=5, target=5;

    int a[5][5] =
        {
            { 1, 4, 7, 11, 15 },
            { 2, 5, 8, 12, 19 },
            { 3, 6, 9, 16, 22 },
            { 10, 13, 14, 17, 24 },
            { 18, 21, 23, 26, 30 }
        };

    int i=0, j=n-1;
    bool flag=false;

    while(i<n && j>=0){

    if(a[i][j]==target){
        flag=true;
    }
    a[i][j]>target?j--:i++;

}
    if(flag){
            cout<<"Found "<<target<<" at "<<i<<","<<j<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

}