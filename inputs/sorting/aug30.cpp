#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={3,24,4,3,25,6};
    sort(nums.begin(),nums.end());
    int ansLast=-1;
    int target=24;
    int low=0;
    int high=nums.size()-1;
    
while(low<=high){
    int mid=low+(high-low)/2;
    if(nums[mid]==target){
        ansLast=mid;
        low=mid+1;
    }else if(nums[mid]>target){
    high=mid-1;
    }else{
        low=mid+1;
    }
}
cout<<"last occurence:"<<endl;
cout<<ansLast;
cout<<endl;
int ansFirst=-1;
while(low<=high){
    int mid=low+(high-low)/2;
    if(nums[mid]=target){
        ansFirst=mid;
        high=mid-1;
    }else if(nums[mid]<target){
        low=mid+1;
    }else{
        high=mid-1;
    }
}
cout<<"first occurence:"<<endl;
cout<<ansFirst;
cout<<endl;
cout<<"total occurence "<<ansLast-ansFirst+1<<endl;
  
}