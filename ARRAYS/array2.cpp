#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// void createArray( int arr[],int length){
//     for(int i=0;i<length;i++){
//         cout<<"enter element at: "<<i<<endl;
//         cin>>arr[i];
    
//     }
//     cout<<"the array is [";
//     for(int i=0;i<length;i++){
//         if(i>0)cout<<",";
//         cout<<arr[i];
//     }
//     cout<<"]"<<endl;
// }
// void printEvenOdd(int arr[], int size){
//     for(int i=0;i<size;i++){
//         if(arr[i]%2==0)
//         cout <<arr[i]<<": it's even"<<endl;
//     else{
//         cout<<arr[i]<<": It's odd"<<endl;
//     }
//     }
// }
// void zeroAndOnes(int arr[],int size){
//     int noOfZeros=0;
//     int noOfOnes=0;
//     int otherNos=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//             noOfZeros++;
//         }else if(arr[i]==1){
//             noOfOnes++;
//         }else{
//           otherNos++;
//         }
//     }
//     cout<<"noOfOnes:"<<noOfOnes<<endl;
//     cout<<"noOfZeros:"<<noOfZeros<<endl;
//     cout<<"otherNos:"<<otherNos<<endl;
// }
// void findValue(int arr[],int size){
//     int number;
//     bool found=false;
//     cout<<"enter number:"<<endl;
//     cin>>number;
//     for(int i=0;i<size;i++){
//         if(number==arr[i]){
//             cout<<"number("<<number<<") found at index:"<<i<<endl;
//          found=true;
//     // break;
// }
//         // }else{cout<<"number("<<number<<") is not in this array"<<endl;}
//     }
//     if(found==false)cout<<"number not found"<<endl;
// }
// void findElement(vector<int>&name){

 
// int target;
// cout<<"Enter target:"<<endl;
// cin>>target;
// bool found=false;
// for(int i=0;i<name.size();i++){
//     if(name[i]==target){
//         cout<<"number found at index: "<<i<<endl;
//         found=true;

//     }
// }
// if(found==false){
//     cout<<"didn't find the number"<<endl;
// }



// }
// void times(vector<int>&name){
//     int target;
//     cout<<"enter targeted value:"<<endl;
//     cin>>target;
//     int noOfTarget=0;
//     for(int i=0;i<name.size();i++){
//         if(name[i]==target){
//             noOfTarget++;
//         }
//     }
    
//     cout<< "total no of targeted value is "<<noOfTarget<<endl;
// }
// void avg(vector<int>&name){
//     int sum=0;
//   double avg;
//     for (int i=0;i<name.size();i++){
//         sum=sum+name[i];
//     }
//     avg=(sum*1.0)/name.size();
//     cout<<"the average is: "<<avg<<endl;
//     // return avg;
//     avg+=10;
//     cout<<avg;

// }
// void multi(vector<int>&name){
//     int constant;
//     cout<<"enter constant:"<<endl;
//     cin>>constant;
//     for(int i=0;i<name.size();i++){
//        name[i]= name[i]*constant;
//     }
//     cout<<"new values"<<endl;
//     cout<<"the elements are {";
//     for(int i=0;i<name.size();i++){
//         if(i>0)cout<<",";
//         cout<<name[i];
        
//     }
//     cout<<"}";
// }
// int maxValue(vector<int>&name){
//     if (name.empty()){
//         cout<<"vector is empty"<<endl;
//         return 0;
//     }
//     int maxNo=name[0];
//     for(int i=0;i<name.size();i++){
//         if(name[i]>maxNo){
//             maxNo=name[i];
//         }
//     }
//     cout<<"max no is "<< maxNo<<endl;
//     return maxNo;
// }
// void min(vector<int>&name){
//     int minValue=INT_MAX;
//     for(int i=0;i<name.size();i++){
//         minValue=min(minValue,name[i]);
//     }
//     cout<<"min value is "<<minValue<<endl;
// }
// void add(vector<int>&name){
//     int sum=0;
// for(int i:name){
//     sum+=i;

// }
// cout<<"sum is:"<<sum<<endl;
// }
// void reverse(vector<int>&name){
//     int n=name.size()-1;
//     for(int i=0;i>=n;i++){
//         name[i]=name[n];
//     }
// }



int main(){
//     vector<int>nums(5);
//     fill(nums.begin(),nums.end(),10);
//     for(int i:nums){
//     cout<<i<<endl;
// vector<int> nums = {5,10,15};

// int sum = 0;

// for(int i : nums){
//     sum += i;
// }

cout << sum;
// }
// vector<int>nums={5,10,15,20,25};
// add(nums);

    // vector<int>nums={1,-221,454,33,22,77};
    // min(nums);
    // // maxValue(nums);
    // multi(nums);
    // avg(nums);
   


    // times(nums);
//     vector<int>miles={1,22,454,33,22,77};
// findElement(miles);
    

//     // printEvenOdd()
//    int name[7]={0,1,1,1,3,0,10};
//     // createArray(name,7);
//     // printEvenOdd(name,7);
//     zeroAndOnes(name,7);
// findValue(name,7);




    return 0;
}
