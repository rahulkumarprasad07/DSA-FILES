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
    
}
int main(){
  vector<vector<int>>test(3,vector<int>(2));
  sum(test);




    return 0;
}