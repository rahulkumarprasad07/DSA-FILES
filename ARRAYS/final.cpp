// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<numeric>
// using namespace std;
//  bool even(int i){
//         return i%2==0;
//     };
// int main(){
   
// vector<int>arr={10,2,3,3,90};
// int target=10;
// auto it=find(arr.begin(),arr.end(),target);
// cout<<*it<<endl;
// for(int a:arr)

// cout<<a<<" ";

// auto it=find_if(arr.begin(),arr.end(),even);
// cout<<*it<<endl;
// reverse(arr.begin(),arr.end());
// for(int a:arr)
// cout<<a<<" ";
// auto it=find_if(arr.begin(),arr.end(),even);
// cout<<*it<<endl;
// auto it=unique(arr.begin(),arr.end());
// arr.erase(it,arr.end());
// for(int a:arr)
// cout<<a<<" ";

// partition(arr.begin(),arr.end(),even);
// for(int a:arr){
//     cout<<a<<" ";
// }


//     return 0;
// }

//numeric algorithm
// #include<vector>
// #include<iostream>
// #include<algorithm>
// #include<numeric>
// using namespace std;
// int main(){
//     vector<int>arr(3);
    // vector<int>brr={0,4,6,3,5};
//  int product=inner_product(arr.begin(),arr.end(),brr.begin(),0);in
// vector<int>right(arr.size());
// partial_sum(arr.begin(),arr.end(),right.begin());
// for(int a:right)
// cout<<a<< " " ;
// iota(arr.begin(),arr.end(),3);
// for(int a:arr)
// cout<<a<<" ";

//     return 0;
// }
//searching algorithm
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr={33,33,72,29,77,33,35};
 int target=33;
    sort(arr.begin(),arr.end());

  auto p=equal_range(arr.begin(),arr.end(),target);
  cout<<(p.first-arr.begin())<<endl;
  cout<<(p.second-arr.begin())<<endl;
return 0;
}