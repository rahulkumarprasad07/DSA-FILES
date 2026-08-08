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
// const int cols=100;
// void sumCol(int arr[][cols],int row,int col){

// int sum;

// cout<<"enter values:"<<endl;
// for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
//         cin>>arr[i][j];
      
//     }
// }
// //summ finding..........
// for(int i=0;i<col;i++){
//     //initializing sum to 0 for every row iteration
//      sum=0;
//     for(int j=0;j<row;j++){
       
//       sum+=arr[j][i];
      
//     }
//     cout<<"sum of col"<<i+1<<" is "<<sum<<endl;
// }


// }
// int main(){
// int test[3][cols];
// sumCol(test,3,2);
// // sumOfArray(test,2,3);















//     return 0;
// }
// #include <iostream>
// #include <climits>
// using namespace std;


// const int cols=100;
// void maxSumRow(int arr[][cols],int row,int col){
//     int rowNo;
//     int maxRow;
//     int sum=0;
//     int maxSum=INT_MIN;
//     cout<<"enter values: "<<endl;;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cin>>arr[i][j];
//         }
//     }
//     //rowwise summ........
//     for(int i=0;i<row;i++){
//         sum=0;
//         rowNo=0;
//         for (int j=0;j<col;j++){
//             sum+=arr[i][j];
//             rowNo=i+1;
//         }
//         if(sum>=maxSum){
//             maxSum=sum;
//             maxRow=rowNo;

//         }
//     }
//     cout<<"max sum is: "<<maxSum<<endl;
//     cout<<"row is: "<<maxRow<<endl;
// }
// int main(){
// int test[3][cols];
// maxSumRow(test,3,2);

//     return 0;
// }
// #include <iostream>
// #include <climits>
// using namespace std;


// const int cols=100;
// void theSum(int arr[][cols],int row,int col){
// int secSum=0;
// int priSum=0;
// int sum=0;
//     cout<<"enter values: "<<endl;;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cin>>arr[i][j];
//             if(i==j){
//                 priSum+=arr[i][j];
//             }
//           if(j==row-(i+1)){
//             secSum+=arr[i][j];
//           }
//          sum=priSum+secSum-arr[row/2][col/2];
//         }
       
//     }

//   cout<<"the sum is: "<<sum<<endl;
// }
// int main(){
// int test[4][cols];
// theSum(test,4,4);

//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    cout << "Enter elements:\n";

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int primarySum = 0;
    int secondarySum = 0;

    for(int i = 0; i < n; i++) {
        primarySum += arr[i][i];           // Primary diagonal
        secondarySum += arr[i][n - 1 - i]; // Secondary diagonal
    }

    cout << "Primary Diagonal Sum: " << primarySum << endl;
    cout << "Secondary Diagonal Sum: " << secondarySum << endl;

    return 0;
}