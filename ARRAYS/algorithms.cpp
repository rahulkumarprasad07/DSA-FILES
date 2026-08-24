#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
 vector<int>arr;
 arr.push_back(10);
 arr.push_back(20);
 arr.push_back(30);
 arr.push_back(40);
 arr.push_back(50);
 int target=40;
 auto it=find(arr.begin(),arr.end(),target);
 cout<<*it<<endl;

// for( int  i:arr){
//     cout<<i<<" ";
// };

    return 0;
}