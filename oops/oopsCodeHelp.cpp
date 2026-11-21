#include <bits/stdc++.h>
using namespace std;
class student {
    public:
//attributes
int id;
int age;
int nos;
string name;

//counstructor
student(){
    cout<<"constructor is called"<<endl;
}
//parameterized constructor
student(int id,int age,int nos,string name){
 
    this->id=id;
    this->age=age;
    this->nos=nos;
       this->name=name;
}

//copy constructor
student(const student &ori ){
    this->id=ori.id;
    this->age=ori.age;
    this->nos=ori.nos;
    this->name=ori.name;
}
//functions
void study(){
    cout<<this->name<<" studying"<<endl;
}
void sleep(){
    cout<<this->name<<"sleep"<<endl;
}
void bunk(){
    cout<<this->name<<"bunk"<<endl;
}
//deconstructor
~student(){
    cout<<"deconstructor is called"<<endl;
}
};
int main() {
    student A;
    A.id=5;
    A.name="Rahul";
    cout<<A.name<<endl;
    A.study();
    // student B;
    // B.name="neetu";
    // B.bunk();
    //     student C(3,15,4,"Shyam");
    // cout<<C.name<<" : Name"<<" "<<C.id<<" : ID"<<endl;S
    // Student C=A;

//     student C(A);
//  cout<<C.name<<" and "<<A.name<<endl;

    //dynaminc memory allocation
    student *D=new student(3,44,3,"RENU");
    cout<<D->name<<endl;
   D->sleep();
   delete D;







    return 0;

}