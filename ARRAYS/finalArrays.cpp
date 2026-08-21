#include<iostream>
#include<vector>
using namespace std;
void sum(vector<vector<int>>matrix){

    int row=matrix.size();
    //taking input
    cout<<"enter inputs"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<matrix[i].size();j++){
            cin>>matrix[i][j];
        }
    }
    //output
    cout<<"the matrix is"<<endl;
    
     for(int i=0;i<row;i++){
        for(int j=0;j<matrix[i].size();j++){
           cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
   int top=0;
   int bottom=matrix.size()-1;
   int left=0;
   int right=matrix[0].size()-1;

int main(){
  vector<vector<int>>test(3,vector<int>(2));
  sum(test);




    return 0;
}