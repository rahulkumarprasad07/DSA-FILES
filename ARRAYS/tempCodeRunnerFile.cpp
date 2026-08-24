// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//  vector<int>arr;
//  arr.push_back(10);
//  arr.push_back(20);
//  arr.push_back(30);
//  arr.push_back(40);
//  arr.push_back(50);
//  int target=40;
//  auto it=find(arr.begin(),arr.end(),target);
//  cout<<*it<<endl;

// // for( int  i:arr){
// //     cout<<i<<" ";
// // };

//     return 0;
// }
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
// bool check( int a){
//     return a%2==0;
// }
int main(){
 vector<int>arr;
 arr.push_back(20);
  arr.push_back(27);
   arr.push_back(24);
    arr.push_back(22);
     arr.push_back(27);
    //  int target=211;
    //  auto it=find(arr.begin(),arr.end(),target);
    //  cout<<it<<endl;
// for(int i:arr){
//     cout<<i<<" ";
// }

// auto it=find_if(arr.begin(),arr.end(),check);
// cout<<*it<<endl;
// int target=27;
// int ans=count(arr.begin(),arr.end(),target);
// 
// sort(arr.begin(),arr.end());
// for(int i:arr){
//     cout<<i<<" ";
// }
reverse(arr.begin(),arr.end());
for(int i: arr){
    cout<<i<<" ";
}


    return 0;
}