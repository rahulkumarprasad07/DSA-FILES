#include <bits/stdc++.h>
using namespace std;

// class Student{
//     public:
//     string name;
//     int rollNo;
//     float gpa;
//     //functions
//     void change(int &x){
//         x=x+10;
//     }
// };


    
// Student s1;
// s1.name="Rahul";
// s1.rollNo=77;
// s1.gpa=9.3;
// cout<<s1.name<<" "<<s1.rollNo<<" "<<s1.gpa<<endl;
// s1.change(s1.rollNo);

//s2 object
// Student s2;
// s2.name="Aditya";
// s2.rollNo=033;
// s2.gpa=6.7;
    
// cout<<s1.name<<" "<<s1.rollNo<<" "<<s1.gpa<<endl;
// cout<<s2.name<<" "<<s2.rollNo<<" "<<s2.gpa<<endl;




// class employee{
//     public:
//     string name;
//     string employeeID;
//     double salary;
//     void display(){
//         cout<<"name: " <<name<<" "<<"employeeID: "<<employeeID<<" "<<"salary: "<<" "<<salary<<endl;
//     }
//     // void increase(double &x){
//     //     double y=x*(10.0/100.0);
//     //      x+=y;

//     // }
//     void increase(){
//         double y=salary*(10.0/100.0);
//         salary+=y;
//     }
// };

// int main() {
// employee e1;
// e1.name="Mukesh";
// e1.employeeID="07715602725";
// e1.salary=60001;
// e1.display();
// employee e2;
// e2.name="Rakesh";
// e2.employeeID="07615602725";
// e2.salary=50002;
// e2.increase();
// e2.display();
// class employee{
//     public:
//     string name;
//     string employeeID;
//     double salary;
//     employee(string n,double s,string e){
//         name=n;
//         salary=s;
//         employeeID=e;
//     }
//     void display(){
//         cout<<"name : "<<name<<" "<<"salary: "<<salary<<" "<<"employeeID: "<<employeeID<<endl;
//     }
//     employee() {
//     name = "";
//     salary = 0;
//     employeeID = "";
// }
// };

//     employee e1("rahul",100000,"077156");
//       employee e2("shyam",10000,"077256");
//         employee e3("nikhil",1000,"077196");
//     e1.display();
//         e2.display();
        
//         e3.display();

//        employee e4;
//        e4.name="shyam";
//        e4.salary=1000000;
//        e4.employeeID="099876";
//        e4.display();

    //     class BankAccount{
    //         public:
    //         string accountHolder;
    //         string accountNumber;
    //         double balance;
    //         BankAccount(){
    //             accountHolder="";
    //             accountNumber="";
    //             balance=0;
    //         }
    //         BankAccount(string h,string n,double b){
    //             accountHolder=h;
    //             accountNumber=n;
    //             balance=b;
    //         }
    //         void display(){
    //             cout<<"accountHolder: "<<" "<<accountHolder<<" "<<"accountNumber"<<" "<<accountNumber<<" "<<"balance"<<" "<<balance<<endl;

    //         }
    //     };
    //        

    // BankAccount b1;
    // b1.accountHolder="RAHUL";
    // b1.accountNumber="07777";
    // b1.balance=20000;
    // b1.display();
    // BankAccount b2("ADITYA","088888",50000);
    // BankAccount b3("SHYAM","033333",499);
    // b2.display();
    // b3.display();

class product{
    public:
    string name;
    double price;
    int quantity;

    product(string name,double price,int quantity){
    this->name=name;
    this->price=price;
    this->quantity=quantity;
    }
    double calculateTotal (){
  return price*quantity;

}
double applyDiscount(){
    price*=(90.0/100.0);
    return price;
}
void display() {
        cout<<"name: "<<name<<" "<<"price: "<<applyDiscount()<<" " <<"total : "<<calculateTotal()<<endl;
}
};
// void comparePrice(const product &p1,const product &p2){
//     if(p1.calculateTotal()>p2.calculateTotal()){
//         cout<<"product p1 is expensive"<<endl;
//     }else if(p1.calculateTotal()==p2.calculateTotal()){
//         cout<<"product p2 and p1 costs same"<<endl;
//     }else{
//         cout<<"product p2 is expensive"<<endl;
//     }
// }




  int main(){


product p1("Laptop",55000,2);
p1.display();
product p2("Mouse",500,3);
p2.display();
//  comparePrice( p1, p2);









    return 0;
}