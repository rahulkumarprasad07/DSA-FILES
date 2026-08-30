#include<bits/stdc++.h>
using namespace std;
bool myComp(vector<int>&a,vector<int>&b){
    return a[1]<b[1];
}

int main(){

// vector<int>nums={2,4,3,6,4,1};
// for(int a:nums){
//     cout<<a<<" ";
// }
// cout<<endl;
// int n=nums.size();
// for(int i=0;i<n;i++){
//     for(int j=0;j<n-1-i;j++){
//         if(nums[j]>nums[j+1]){
//             swap(nums[j],nums[j+1]);
//         }
//     }
// }
// cout<<"sorted array:"<<endl;
// for(int i=0;i<n;i++){
//     cout<<nums[i]<<" ";
// }
// cout<<endl;
// int n=nums.size();
// for(int i=0;i<n-1;i++){
//     int minIndex=i;
//     for(int j=i+1;j<n;j++){
//         if(nums[j]<nums[minIndex]){
//             minIndex=j;
//         }
//     }
//     swap(nums[i],nums[minIndex]);
// }
// for(int a: nums){
//     cout<<a<< " ";

// }
// cout<<endl;



// cout<<"custom operator:"<<endl;
// sort(nums.begin(),nums.end(),myComp);
// for(int a:nums){
//     cout<<a<<" ";
// }
// cout<<endl;

cout<<"2d custom"<<endl;
vector<vector<int>>nums={
    {1,2},
    {20,34},
    {45,54},
    {43,88}
};
int n=nums.size();
sort(nums.begin(),nums.end(),myComp);
for(int i=0;i<n;i++){
    for(int j=0;j<nums[0].size();j++){
        cout<<nums[i][j]<< " ";
    }

}
cout<<endl;
    return 0;
}