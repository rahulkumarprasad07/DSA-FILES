#include <iostream>
#include <vector>
using namespace std;
//  void inputMatrix(vector<vector<int>>&arr){
//    int row=arr.size();
//   cout<<" input values:"<<endl;
  
//    for(int i=0;i<row;i++){
//     for(int j=0;j<arr[i].size();j++){
//         cin>>arr[i][j];
//     }
//    }
//    cout<<"required matrix:"<<endl;
//    for(int i=0;i<row;i++){
//     for(int j=0;j<arr[i].size();j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//    }
//  }
void netSum(vector<vector<int>>&arr){
    int row=arr.size();

    cout<<"input values:";
    for(int i=0;i<row;i++){
                int sum=0;
        for(int j=0;j<arr[i].size();j++){
                cin>>arr[i][j];
                sum+=arr[i][j];
               
        }
         cout<<"the sum of row "<<i+1<<" is "<<sum<<endl;
         cout<<"enter"<< i+1<<" row:"<<endl;
    }
    

}

int main(){
    vector<vector<int>>test(3,vector<int>(3));
    netSum(test);



    return 0;
}