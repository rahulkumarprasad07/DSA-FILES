#include <iostream>
#include <vector>
#include <climits>
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
// void netSum(vector<vector<int>>&arr){
//     int row=arr.size();

//     cout<<"input values:";
//     for(int i=0;i<row;i++){
//                 int sum=0;
//         for(int j=0;j<arr[i].size();j++){
//                 cin>>arr[i][j];
//                 sum+=arr[i][j];
               
//         }
//          cout<<"the sum of row "<<i+1<<" is "<<sum<<endl;
//          cout<<"enter"<< i+1<<" row:"<<endl;
//     }
    

// }
// void colSum(vector<vector<int>>&arr){
//     int row=arr.size();
//     int sum=0;

//     cout<<"input values:"<<endl;
//     for(int i=0;i<row;i++){
                
//         for(int j=0;j<arr[i].size();j++){
//                 cin>>arr[i][j];
                
               
//         }
         
//     }
//     vector<vector<int>>transpose=arr;
//     int theRows=transpose.size();
//     for(int i=0;i<theRows;i++){
//         for(int j=0;j<transpose[i].size();j++){
//   if(i<=j){
//     transpose[i][j]=transpose[j][i];
//   }
//         }
//     }
//     for(int i=0;i<theRows;i++){
//         for(int j=0;j<transpose[0].size();j++){
//             cout<<transpose[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     for(int i=0;i<theRows;i++){
//         sum=0;
//         for(int j=0;j<transpose[i].size();j++){
//          sum+=transpose[i][j];
//         }
//         cout<<"sum of col"<<i+1<<" is "<<sum<<endl;
//     }

// }
// void maxMin(vector<vector<int>>&arr){
//     int row=arr.size();
//     int max=INT_MIN;
//     int min=INT_MAX;

//     cout<<"input values:"<<endl;
//     for(int i=0;i<row;i++){
                
//         for(int j=0;j<arr[i].size();j++){
//                 cin>>arr[i][j];
               
                
               
//         }
         
//     }
//     //max value
//        for(int i=0;i<row;i++){
                
//         for(int j=0;j<arr[i].size();j++){
//                 if(arr[i][j]>=max){
//                     max=arr[i][j];
//                 }
               
//         }
         
//     }
//     //min value
//        for(int i=0;i<row;i++){
                
//         for(int j=0;j<arr[i].size();j++){
//               if(arr[i][j]<=min){
//                 min=arr[i][j];
//               }
               
//         }
         
//     }
//     cout<<"max value is: "<<max<<endl;
//     cout<<"min value is: "<<min<<endl;
// }
void maxMin(vector<vector<int>>&arr){
    int row=arr.size();
int sum=0;

    cout<<"input values:"<<endl;
    for(int i=0;i<row;i++){
                
        for(int j=0;j<arr[i].size();j++){
                cin>>arr[i][j];
                if(i==j){
                    sum+=arr[i][j];
                }
              
        }
         
    }
    cout<<"sum is:"<<sum<<endl;
}

int main(){
    vector<vector<int>>test(3,vector<int>(3));
 maxMin(test);



    return 0;
}
