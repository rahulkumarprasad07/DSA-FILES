// #include <iostream>
// #include<vector>
// using namespace std;
// void boundarySum(vector<vector<int>>&matrix){
//     int row=matrix.size();
//     int col=matrix[0].size();
//     cout<<"enter inputs:"<<endl;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cin>>matrix[i][j];
//         }
//     }
//     cout<<"matrix:"<<endl;
//         for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     //boundary sum...
//     int top=0,bottom=row-1;
//     int left=0,right=col-1;
//     int sum=0;
//     //left to right
//     for(int i=top;i<=right;i++){
//     sum+=matrix[top][i];
//     }
//     top++;
//     //top to bottom
//     for(int i=right;i<=bottom;i++){
//    sum+=matrix[i][right];
//     }
//     right--;
//     //right to left
//     for(int i=right;i>=left;i--){
//         sum+=matrix[bottom][i];
//     }
//     bottom--;
//     //bottom to top
//     for(int i=bottom;i>=top;i--){
//         sum+=matrix[i][left];
//     }
//     cout<<"sum is :"<<sum<<endl;
// }





// int main(){
//  vector<vector<int>>test(3,vector<int>(2));
//  boundarySum(test);
//     return 0;
// }
// #include <iostream>
// #include<vector>
// using namespace std;
// void boundarySum(vector<vector<int>>&matrix){
//     int row=matrix.size();
//     int col=matrix[0].size();
//     cout<<"enter inputs:"<<endl;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cin>>matrix[i][j];
//         }
//     }
//     cout<<"matrix:"<<endl;
//         for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     //transpose
//     vector<vector<int>> transpose(col, vector<int>(row));
    
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             transpose[j][i]=matrix[i][j];
//         }
//     }
//     //transpose matrix
//     cout<<"transpose matrix:"<<endl;
//         for(int i=0;i<col;i++){
//         for(int j=0;j<row;j++){
//             cout<<transpose[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }




// int main(){
//  vector<vector<int>>test(3,vector<int>(2));
//  boundarySum(test);
//     return 0;
// }

// #include <iostream>
// #include<vector>
// using namespace std;
// void nintyDegree(vector<vector<int>>&matrix){
//     int row=matrix.size();
//     int col=matrix[0].size();
//     cout<<"enter inputs:"<<endl;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cin>>matrix[i][j];
//         }
//     }
//     cout<<"matrix:"<<endl;
//         for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//    vector<vector<int>>ulta(col,vector<int>(row));
//    for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
//         ulta[j][i]=matrix[i][j];
//     }
//    }
//    //printing Traanspose
//    cout<<"transpose"<<endl;
//    for(int i=0;i<col;i++){
// for(int j=0;j<row;j++){
//     cout<<ulta[i][j]<<" ";
// }
// cout<<endl;
//    }
//    //reversing
// for(int i=0; i<col; i++){
//     for(int j=0; j<row/2; j++){
//         swap(ulta[i][j], ulta[i][row-1-j]);
//     }
// }
// cout<<"reverse:"<<endl;
//    for(int i=0;i<col;i++){
// for(int j=0;j<row;j++){
//     cout<<ulta[i][j]<<" ";
// }
// cout<<endl;
//    }

// }




// int main(){
//  vector<vector<int>>test(3,vector<int>(2));
//  nintyDegree(test);
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main(){

vector<int>arr={10,20,30,40,50,60};
// vector<int>brr={60,50,40,30,20,10};
// int product=inner_product(arr.begin(),arr.end(),brr.begin(),0);
// cout<<"total sum:"<<product;
// vector<int>ans(arr .size());
// partial_sum(arr.begin(),arr.end(),ans.begin());
// for(int i:ans)
// cout<<i<<" ";
vector<int>fill(5);
iota(fill.begin(),fill.end(),20);
for(int i:fill)
cout<<i<<" ";










    return 0;
}