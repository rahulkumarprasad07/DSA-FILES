#include<iostream>
#include<vector>
using namespace std;
vector<int> sum(vector<vector<int>>matrix){

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
 int n=matrix.size();
 int m=matrix[0].size();
int left=0, right=m-1;
int top=0, bottom=n-1;
vector<int>ans;
//left to right
while(left<=right && top<=bottom){
for(int i=top;i<=right;i++){
    ans.push_back(matrix[top][i]);
}
top++;
for(int i=top;i<=bottom;i++){
    ans.push_back(matrix[i][right]);
}
right--;
if(top<=bottom){
for(int i=right;i>=left;i--){
    ans.push_back(matrix[bottom][i]);
}

bottom--;
}
if(left<=right){
for(int i=bottom;i>=top;i--){
    ans.push_back(matrix[i][left]);
}
left++;
}
}
for(int i : ans) {
    cout << i << " ";
}

return ans;


}
int main(){
  vector<vector<int>>test(3,vector<int>(2));
  sum(test);




    return 0;
}