// #include <bits/stdc++.h>
// using namespace std;
// // int fact(int n){
// //     if(n==0) return 1;
// //     int ans=n*fact(n-1);
// //     return ans;

// // }
// //power of 2
// // int power(int n){
// //     if(n==0) return 1;
// //     int ans=2*power(n-1);
// //     return ans;
// // }
// //counting
// // void count(int s,int n){
// //     if(s>n) return;
// //     cout<<s<<" ";
// //     count(s+1,n);
  

// // }
// // void revCount(int n){
// //     if(n==0) {
// //         cout<<'0'<<" ";
// //         return;
// //     } 
// //     cout<<n<<" ";
// //     revCount(n-1);
// // }
// // fibonacci
// // int fib(int n){
// //     if(n==0 ){
// //         return 0;
// //     }
// //      if(n==1){
// //         return 1;
// //     }
// //     int ans=fib(n-1)+fib(n-2);
// //     return ans;
// // }
// //printing an array
// // void printArray(vector<int>arr, int index){
// //     if(index<0){
// //         return ;
// //     }
// //     cout<<arr[index]<<" ";
// //     printArray(arr,index-1);
// // }
// //search in an array
// // void search(vector<int>arr,int target,int index,int size){
// //     if(index>size){
// //         cout<<"not found!!!!!"<<endl;
// //         return;
// //     }
// //     if(arr[index]==target){
// //         cout<<index<<endl;
// //         return;
// //     }
// //     search(arr,target,index+1,size);
// // }
// //GET min element/max element
// // void minimum(vector<int>arr,int n,int index,int size){
// // if(index>size) {
// //     cout<<n<<"\n";
// //     return;
// // }
// //    n=max(n,arr[index]);
// //    minimum(arr,n,index+1,size);
   
// // }
// //print even numnber
// // void even(vector<int>arr,int size,int index){
// //     if(index>size) return;
// //     if(!(arr[index] & 1)){
// //         cout<<arr[index]<<endl;
// //     }
// //     even(arr,size,index+1);
// // }
// //print even numnber
// // void odd(vector<int>arr,int size,int index){
// //     if(index>size) return;
// //     if(arr[index] & 1){
// //         cout<<arr[index]<<endl;
// //     }
// //     odd(arr,size,index+1);
// // }
// //binary search
// // void recBS(vector<int>arr,int s,int e,int target){
// //     if(s>e) {
// //         cout<<"not found!"<<endl;
// //         return ;
// //     }
// //     int mid=s+(e-s)/2;
// //     if(arr[mid]==target){
// //         cout<<mid;
// //         return;
// //     }
// //     else if(arr[mid]>target){
// //         recBS(arr,s,mid-1,target);
// //     }else{
// //         recBS(arr,mid+1,e,target);
// //     }


// // }
// //print digits
// void printDigits(int num){
//     if(num==0) return;
//     int digit=num%10;
    
//     num=num/10;
//     printDigits(num);
//     cout<<digit<<" ";
// }


// int main() {
//     int n=240;
//     printDigits(n);
//     // vector<int>arr={10,23,50,31,44};
//     // int s=0;
    
//     // int e=arr.size()-1;
//     // recBS(arr,s,e,230);
//     // odd(arr,size,0);
//     // int n=INT_MIN;
//     // minimum(arr,n,0,size);
//     // search(arr,40,0,size);
//     // printArray(arr,size);

//     // int n=2;
//     // int show=fib(n);
//     // cout<<show;
//     // int yo=power(n);

//     // cout<<yo;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
// void printArray(vector<int>arr,int index,int size){
//     if(index>=size) return ;
//     cout<<arr[index]<<" ";
//     printArray(arr,index+1,size);
// }
// void reverse(vector<int>arr,int index){
//     if(index<0) return;
//     cout<<arr[index]<<" ";
//     reverse(arr,index-1);
// }
// void search(vector<int>arr,int size,int index,int target){
//     if(target==arr[index] ) {
//         cout<<"index is: "<<index<<endl;
//         return;
//     }
//     if(index>=size) {
//         cout<<"not found"<<endl;
//         return;
//     }
//     search(arr,size,index+1,target);
// }
// void getMin(vector<int>arr,int index,int size,int min){
// if(index>=size) {
//     cout<<min;
//     return;}
// if(arr[index]<min){
//     min=arr[index];
// }
// getMin(arr,index+1,size,min);
// }
// void getMax(vector<int>arr,int index,int size,int max){
// if(index>=size) {
//     cout<<max;
//     return;}
// if(arr[index]>max){
//     max=arr[index];
// }
// getMax(arr,index+1,size,max);
// }
vector printEven(vector<int>&arr,vector<int>&data,int index,int size){
    
    if(index>=size) return data;
    if(arr[index]%2==0){
        data.push_back(arr[index]);
    }
     printEven(arr,data,index+1,size);

}
int main() {
    vector<int>arr={-4,5,6,2,3000,4,5};
    int n=arr.size();

    vector<int>data;
   printEven(arr,data,0,n);
    for(int a:data){
        cout<<a<<" ";
    }
//     int max=INT_MIN;
//    getMax(arr,0,n,max);
    // reverse(arr,n);
    // printArray(arr,0,n);



    return 0;
}