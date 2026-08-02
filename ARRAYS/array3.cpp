// #include<iostream>
// #include<vector>
// using namespace std;
// //


// // }
// // // void reverse(vector<int>&name){
// //     int n=name.size();
// //     int i=0;
// //     int j=name.size()-1;
// //     while(i<=j){
// //         swap(name[i],name[j]);
// //         i++;
// //         j--;
// //     }
// //     for(int i:name){
// //         cout<<i<<",";
// //     }
// // }
// // void reverse(vector<int>&name){
// //     int n=name.size();
// //     int i=0;
// //     int j=name.size()-1;
// //    if(i==0 & j==name.size()-1){
// //         swap(name[i],name[j]);
       
// //     }
// //     for(int i:name){
// //         cout<<i<<",";
// //     }
// // }
// // void swapAdjacent(vector<int>&name){
    
// //     for(int i=0;i<name.size();i+=2){
// //         swap(name[i],name[i+1]);


// //     }
// //     for(int i:name){
// //         cout<<i<<",";
// //     }
// // }
// //  void similarity(vector<int>&name){
// //     for(int i=0;i<name.size();i++){
// //         for(int j=i+1;j<name.size();j++){
// //             if(name[i]==name[j]){
// //                 cout<<"similarity found at index"<<i<<","<<j<<"and value is "<<name[i]<<endl;
// //             }

// //         }
// //     }
// //  }
// // void smallestSum(vector<int>&name){
// //     int sum=0;
// //     int smallest=INT_MAX;
// //     int idxI=0;
// //     int idxJ=1;
// //     for(int i=0;i<name.size();i++){
// //         for(int j=i+1;j<name.size();j++){
// //             sum=name[i]+name[j];
// //             if(sum<=smallest){
// //                 smallest=sum;
// //            idxI=i;
// //                  idxJ=j;
                
// //             }
// //         }
// //     }
// //     cout<<"smallest sum is : "<<smallest<<" at indices "<<idxI<<" & "<<idxJ;
// // }
// // void largestValueOnSubtraction(vector<int>&name){
// //     int largest=INT_MIN;
// //     int subtract;
// //     int inxI=0;
// //     int inxJ=1;
// //     for(int i=0;i<name.size();i++){
// //         for(int j=i+1;j<name.size();j++){
// //             subtract=name[i]-name[j];
// //             if(subtract>largest){
// //                 largest=subtract;
// //                 inxI=i;
// //                 inxJ=j;
// //             }
// //         }
// //     }
// //      cout<<"Largest Value on Subtraction is : "<<largest<<" at indices "<<inxI<<" & "<<inxJ;


// // }
// void paired(vector<int>&name){
//     for(int i=0;i<name.size();i++){
//         for(int j=i+1;j<name.size();j++){
//              for(int k=j+1;k<name.size();k++)
          
//              cout<<"("<<name[i]<<","<<name[j]<<","<<name[k]<<")"<<endl;
            
//         }
        
//     }
    
// }








// int main(){
//     vector<int>values={10,20,30,40};
//  paired(values);
// //     numbers(values);
// //    reverse(values);


// return 0;
// }



// int main(){
//     vector<int>nums;
//     find(nums);

// return 0;
// }
