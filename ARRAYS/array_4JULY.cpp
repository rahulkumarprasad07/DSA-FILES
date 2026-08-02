#include <iostream>
#include<vector>
using namespace std;

 
 
//  void numbers(vector<int>&nums){
//     int num;
//     int values;
//     cout<<"Enter nums"<<endl;
//     cin>>num;
//     cout<<"enter values:"<<endl;
//     for(int i=0;i<num;i++){
//         cin>>values;
//         nums.push_back(values);
//     }
//     cout<<"your vector is: (";
//    for(int i=0;i<num;i++){
//     if(i>0) cout<<",";
//     cout<<nums[i];
//    } 
   
//     cout<<")"<<endl;
// }
// #include <iostream>
// #include<vector>
// #include<climits>
// using namespace std;

// void find(vector<int>&name){
//     int size;
//     int value;
//     cout<<"enter size:";
//     cin>>size;
//     cout<<"enter values:"<<endl;
//     for(int i=0;i<size;i++){
//         cin>>value;
//         name.push_back(value);
//     }
//     cout<<"the vector is {";
//     for(int i=0;i<name.size();i++){
//         if(i>0){
//             cout<<",";
            
//         }
//         cout<<name[i];
//     }
//     cout<<"}"<<endl;

//     //find max values:
//     int max;
//     int secondMax;
//     max=INT_MIN;
//     secondMax=INT_MIN;
//     for(int i=0;i<name.size();i++){
//         if(name[i]>max){
//         max=name[i];
//     }
   
//     }
//     for(int i=0;i<name.size();i++){
//         if(name[i]>secondMax && name[i]<max){
//             secondMax=name[i];
//         }
//     }
//     cout<<"max value: "<<max<<" secondMax value: "<<secondMax<<endl;
    
// }
void repeat(vector<int>&test){
   
    int store;
    
    for(int i=0;i<test.size();i++){
         int count=1;
         bool alreadyPrinted=false;
        for(int k=0;k<i;k++){
            if(test[i]==test[k]){
                alreadyPrinted=true;
                break;
            }
        }
        for(int j=i+1;j<test.size();j++){
        if(test[i]==test[j] && alreadyPrinted==false ){
         count+=1;
         store=test[i];
        }
        }
        cout<<store<<" appears "<<count<<" times"<<endl;
    }
    


}
int main(){
    //    vector<int>nums;
    // find(nums);
    vector<int>subject={5,6,4,5,2,6,8};
    repeat(subject);


    return 0;
}