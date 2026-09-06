// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> test = {21,3,2,4,43,21,23,21};

//     sort(test.begin(),test.end());

//     int n = test.size();
//     int start=0;
//     int end=n-1;
//     int target=21;
//     int ans;
//     int finalAns;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(target==test[mid]){
//             ans=mid;
//             end=mid-1;
//         }else if(target<test[mid]){
//             end=mid-1;
//         }else{
//             start=mid+1;
//         }


//     }
//    cout<<"first occuerence: "<<ans<<endl;
//    start = 0;
// end = n - 1;
// while(start<=end){
//     int mid=start+(end-start)/2;
//     if(target==test[mid]){
//        finalAns=mid;
//         start=mid+1;
//     }else if(target>test[mid]){
//         start=mid+1;
//     }else{
//         end=mid-1;
//     }
// }
// cout<<"last occurence: "<<finalAns<<endl;


// int total=finalAns-ans+1;
// cout<<"total occuernece: "<<total<<endl;




























    // bool ans=binary_search(test.begin(),test.end(),21);
    // if(ans==true){
    //     cout<<"found"<<endl;
    // }else{
    //     cout<<"not found"<<endl;
    // }
    // int target = 201;

    // int start = 0;
    // int end = n - 1;

    // while(start <= end){
    //     int mid = start + (end-start)/2;

    //     if(target == test[mid]){
    //         cout << "target at " << mid << endl;
    //         return 0;
    //     }
    //     else if(target < test[mid]){
    //         end = mid - 1;
    //     }
    //     else{
    //         start = mid + 1;
    //     }
    // }
    //   cout<<"not found"<<endl;
    // return -1;
   
   
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int>test={1,2,3,4,55,33,22,11,1};
     int n=test.size();
     int s=0;
     int e=n-1;
     int target=55;
     int ans=-1;
     while(s<=e){
        int mid=s+(e-s)/2;
        if(target==test[mid]){
            ans=mid;
            e=mid-1;
        }else if(target<test[mid]){
            e=mid-1;

        }else{
            s=mid+1;
        }
     }
     if(ans==-1){
        cout<<"not found"<<endl;
        return 0;
     }
    else{
        cout<<ans<<endl;
    }

    return 0;
}