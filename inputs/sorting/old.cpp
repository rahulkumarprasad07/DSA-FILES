// #include <iostream>
// #include<vector>
// using namespace std;
// int main(){


// vector<int>arr={222,35,33,234,90};
// int n=arr.size();
// for(int i=0;i<n-1;i++){
//     for(int j=0;j<n-i-1;j++){
//         if(arr[j]>arr[j+1]){
//              swap(arr[j],arr[j+1]);
//         }
       
//     }
// }
// cout<<"sorted array:"<<endl;
// for(int a:arr){
//     cout<<a<<" ";
// }


//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     //bubble sort
// vector<int>arr={400,3,6,7,11};
// cout<<"initial"<<endl;
// for(int b:arr){
//     cout<<b<<" ";
// }
// int n=arr.size();

// for(int i=0;i<n-1;i++){
//     int minIndex=i;
//     for(int j=i+1;j<n;j++){
//        if(arr[j]<arr[minIndex]){
//         minIndex=j;
//        }
//     }
//     swap(arr[i],arr[minIndex]);
// }









// cout<<endl;
// cout<<"after"<<endl;
// for(int a:arr){
//     cout<<a<<" ";
// }







//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//  cout<<"selection sort:"<<endl;
//  vector<int>arr={3,4,3,5,2};
//   cout<<"before"<<endl;
//  for(int a:arr){
//     cout<<a<<" ";
//  }
 
// //  sort(arr.begin(),arr.end());
// //   cout<<"after"<<endl;
// //   for(int b:arr){
// //     cout<<b<<" ";
// //   }
// //  int n=arr.size();

// //  cout<<endl;

// //  for(int i=0;i<n-1;i++){
// //      int minIndex=i;
// //     for(int j=i+1;j<n;j++){
// //         if(arr[j]<arr[minIndex]){
// //        minIndex=j;
// //         }
// //     }
// //     swap(arr[i],arr[minIndex]);
// //  }

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
    vector<int>runningSum(vector<int>&nums){
      vector<int>ans;
      int sum=0;
      for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        ans.push_back(sum);
      };
      for(int a:ans){
        cout<<a<<" ";
      };
       cout<<endl;
         return ans;
    };
int main(){


    vector<int>test={2,3,4,3,2,5};

runningSum(test);


    return 0;
}