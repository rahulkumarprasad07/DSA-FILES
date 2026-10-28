#include <bits/stdc++.h>
using namespace std;

int main() {
    // int a=10;
    // int *ptr=&a;
    // cout<<a<<endl;
    //   cout<<&a<<endl;
    //   cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<&ptr<<endl;
//   int arr[5]={2,33,21,67,55};
//   cout<<&arr+1<<endl;
int a=5;
int *p=&a;
int **q=&p;
int ***r=&q;
int ****s=&r;
cout<<a<<endl;
cout<<p<<endl;
cout<<&p<<endl;
cout<<*p<<endl;
cout<<q<<endl;
cout<<&q<<endl;
cout<<*q<<endl;
cout<<r<<endl;
cout<<&r<<endl;
cout<<*r<<endl;
cout<<s<<endl;
cout<<&s<<endl;
cout<<*s<<endl;
    return 0;
}