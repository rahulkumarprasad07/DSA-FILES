#include <iostream>
#include<vector>
using namespace std;

void createVector(vector<int>&name){
    int values;
    int size;
    cout<<"creating a vector"<<endl;
    cout<<"enter size:";
    cin>>size;
   
    
    cout<<"enter values:";
    for(int i=0;i<size;i++){
       
        cin>>values;
        name.push_back(values);


    }
    cout<<"The Vector is:";
    cout<<"{";

    for(int i=0;i<name.size();i++){
        if(i>0){
            cout<<",";
            
        }
        cout<<name[i];

    }
    cout<<"}";
     

}


int main(){
    vector<int>nums;
    createVector(nums);

return 0;
}