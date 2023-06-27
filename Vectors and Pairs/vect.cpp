#include<iostream>
#include<vector>
#include<numeric> // Accumulate function is defined in this
#include<algorithm> // Sort function is defined in this
using namespace std;

int main(){

//Declaring and Initializing vectors
    vector<int> v;
    v.push_back(5);
    v.push_back(1);
    v.push_back(3);

//_________________________

// There are 3 ways to print a vector
//Method 1
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;

}//5 1 3

//Method 2
vector<int>::iterator it;
for (it=v.begin();it!=v.end();it++)
{
    cout<<*it<<endl;
}//5 1 3

//Method 3
for(auto element:v){
    cout<<element<<endl;
}//5 1 3

//_________________________

//Sorting 
sort(v.begin(),v.end());
for(auto element:v){
    cout<<element<<endl;
} // 1 3 5

//_________________________

//Swapping 2 vectors
vector<int> v1;

v1.push_back(100);
v1.push_back(200);
v1.push_back(300);

v.swap(v1);
//_________________________

//Sum of Vector
int sum=accumulate(v.begin(),v.end(),0);
cout<<sum;
//_________________________

//To get Max element and min element of the vector
//max_element() returns iterator to the max element
int mx=*max_element(v.begin(),v.end());

//min_element() returns iterator to the min element
int mn=*min_element(v.begin(),v.end());

//_________________________

//Convert the vector into a prefix sum vector
// Ex. v=(1,2,3)
// Prefix_sum v={1,3,6}
partial_sum(v.begin(),v.end(),v.begin());
for(auto element:v){
    cout<<element<<endl;
}

//_________________________

}