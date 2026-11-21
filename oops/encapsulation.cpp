// #include <bits/stdc++.h>
// using namespace std;
//    class BankAccount{
//         private:
//         int balance;
//         public:
//         void setBalance(int amount){
//                 balance=amount;
//         }
//         void getBalance(){
//             cout<<"balance is: "<<balance<<endl;
//         }
//     };
// int main() {
//  BankAccount b1;
//  b1.setBalance(5000);
//  b1.getBalance();
//  b1.setBalance(10000);
//   b1.getBalance();
//   cout<<b1.balance<<endl;
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// class BankAccount{
// private:
// int accountNumber;
// string accountHolder;
// double balance;
// public:
// //constructor;
// BankAccount(int accountNumber,string accountHolder,double balance){
//     this->accountNumber=accountNumber;
//     this->accountHolder=accountHolder;
//     if(balance>=0){
//         this->balance=balance;
//     }else{
//         this->balance=0;
//     }
// }
// //setter
// void setBalance(double amount){
//     if(amount>=0){
//         balance=amount;
//     }else{
//         cout<<"invalid amount"<<endl;
//     }
// }
// //getter
// void getAccountHolder(){
//     cout<<"accountHolder : "<<accountHolder<<endl;
// }
// void deposit(double amount){
//     if(amount>0){
//         balance+=amount;
//          cout<<"amount deposited successfully"<<endl;
//     }else{
//         cout<<"invalid amount deposited!!"<<endl;
//     }
// }
// void withdraw(double amount){
//     if(amount>0 && amount<=balance){
//         balance-=amount;
//         cout<<"withdraw successful"<<endl;
//     }
//     else{
//         cout<<"insufficient balance!!"<<endl;
//     }
// }
// //display
// void display(){
//     cout<<"Account Number: "<<accountNumber<<endl;
//     cout<<"Account Holder: "<<accountHolder<<endl;
//     cout<<"Balance: "<<balance<<endl;
// }
// };
// int main() {
//     BankAccount Rahul(101,"Rahul",50000);
//     Rahul.display();
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
class Employee{
private:
int employeeID;
string employeeName;
double salary;
string department;

public:
//constructor:
Employee(int employeeID,string employeeName,double salary,string department){
    this->employeeID=employeeID;
    this->employeeName=employeeName;
if(salary>=0){
        this->salary=salary;
        
}else{
  this->salary=0;

   
}
    this->department=department;
}
//setters
void setSalary(double amount){
    if(amount>=0){
        salary=amount;
        
    }else{
        cout<<"invalid number!"<<endl;
    }
}
void setDepartment(string dept){
    if(dept!=""){
        department=dept;
    }else{
        cout<<"invalid "<<endl;
    }
}
//getters
int getEmployeeID(){
  return employeeID;
}
string getEmployeeName(){
    return employeeName;
}
double getSalary(){
    return salary;
}
string getDepartment(){
    return department;
}
//additioinal functions
void increaseSalary(double percentage){
   if(percentage>0){
     salary=salary+((percentage)/100)*salary;
     cout<<"New Salary: "<<salary<<endl;
   }else{
    cout<<"invalid"<<endl;
   }
}
//display
void display(){
    cout<<"employeeID: "<<employeeID<<endl;
    cout<<"employeeName: "<<employeeName<<endl;
    cout<<"salary: "<<salary<<endl;
    cout<<"department: "<<department<<endl;
}



};
int main() {
    Employee Rahul(101,"Rahul",40000,"CSE");
    Rahul.display();
    Rahul.increaseSalary(10);
    Rahul.setDepartment("IT");
   
    Rahul.setSalary(-5000);
    cout<<"new salary: "<<Rahul.getSalary()<<endl;
     Rahul.display();
    return 0;
}