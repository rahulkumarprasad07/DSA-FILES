#include <iostream>
#include<vector>
using namespace std;
int main(){


vector<int>arr={222,35,33,234,90};
int n=arr.size();
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
             swap(arr[j],arr[j+1]);
        }
       
    }
}
cout<<"sorted array:"<<endl;
for(int a:arr){
    cout<<a<<" ";
}


    return 0;
}