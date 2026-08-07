#include <iostream>
#include <climits>
using namespace std;
// void printArray(int arr[][3]){
//  cout<<"printing 3d array"<<endl;
//     //taking input
//     cout<<"enter values"<<endl;
//     for (int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     //printing values
//     cout<<"the matrix is:"<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// void sumOfArray(int arr[][cols],int row,int col){
//     int sum=0;
//     cout<<"enter values:"<<endl;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cin>>arr[i][j];
//             sum+=arr[i][j];
//         }
//     }
//     cout<<"the sum is: "<<sum<<endl;

// }

// void maxElement(int arr[][cols],int row,int col){
// int maxValue=INT_MIN;
// int minValue=INT_MAX;
// cout<<"enter values:"<<endl;
// for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
//         cin>>arr[i][j];
//         if(arr[i][j]>=maxValue){
//             maxValue=arr[i][j];
//         }
//     }
// }
// cout<<"the max value is: "<<maxValue<<endl;

// }
// const int cols=100;
// void minElement(int arr[][cols],int row,int col){

// int minValue=INT_MAX;
// cout<<"enter values:"<<endl;
// for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
//         cin>>arr[i][j];
//         if(arr[i][j]<=minValue){
//             minValue=arr[i][j];
//         }
//     }
// }
// cout<<"the min value is: "<<minValue<<endl;

// }
// const int cols=100;
// void oddOrEven(int arr[][cols],int row,int col){

// int odd=0;
// int even=0;
// cout<<"enter values:"<<endl;
// for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
//         cin>>arr[i][j];
//         if(arr[i][j]%2==0){
//            even++;
//         }else {
//             odd++;
//         }
//     }
// }
// cout<<"No of ODD: "<<odd<<endl;
// cout<<"No of EVEN: "<<even<<endl;

// }


// const int cols=100;
// void search(int arr[][cols],int row,int col){


// cout<<"enter values:"<<endl;
// for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
//         cin>>arr[i][j];
      
//     }
// }


// }





// const int cols=100;
// void search(int arr[][cols],int row,int col){
//     cout<<"enter target: "<<endl;
//     int target;
//     cin>>target;


// cout<<"enter values:"<<endl;
// for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
//         cin>>arr[i][j];
     
//     }
// }
// //searching element
// for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
      
//       if(arr[i][j]==target){
//         cout<<"found target at index:"<<i<<" and "<<j <<endl;
//       }else{
//         cout<<"not found"<<endl;
//       }
//     }
// }


// }
// const int cols=100;
// void sumRow(int arr[][cols],int row,int col){

// int sum;
// int rowNumber;
// cout<<"enter values:"<<endl;
// for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
//         cin>>arr[i][j];
      
//     }
// }
// //summ finding..........
// for(int i=0;i<row;i++){
//     //initializing sum to 0 for every row iteration
//      sum=0;
//     for(int j=0;j<col;j++){
       
//       sum+=arr[i][j];
//       rowNumber=i+1;
//     }
//     cout<<"sum of row"<<rowNumber<<" is "<<sum<<endl;
// }


// }
const int cols=100;
void sumCol(int arr[][cols],int row,int col){

int sum;

cout<<"enter values:"<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>arr[i][j];
      
    }
}
//summ finding..........
for(int i=0;i<col;i++){
    //initializing sum to 0 for every row iteration
     sum=0;
    for(int j=0;j<row;j++){
       
      sum+=arr[j][i];
      
    }
    cout<<"sum of col"<<i+1<<" is "<<sum<<endl;
}


}
int main(){
int test[3][cols];
sumCol(test,3,2);
// sumOfArray(test,2,3);















    return 0;
}