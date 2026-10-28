#include <bits/stdc++.h>
using namespace std;
//factorial
// int fact(int n){
//         if(n==0) return 1;
//         int smallerProb=n*fact(n-1);
//         return smallerProb;
//     }
//powerof2
// int powerOf2(int n){
//     if(n==0) return 1;
//     int fuck=2*powerOf2(n-1);
//     return fuck;
// }
int main() {
    int a=10;
    int ans=powerOf2(a);
    cout<<ans;
    
    return 0;
}