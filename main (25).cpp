/*

بيانات خاصة:

accountNumber (رقم الحساب) من النوع int

ownerName (اسم صاحب الحساب) من النوع string

balance (الرصيد) من النوع double

ودوال عامة:

دالة deposit(double amount) لإيداع مبلغ.

دالة withdraw(double amount) لسحب مبلغ (لو الرصيد يكفي فقط).

دالة display() لطباعة بيانات الحساب كاملة.\
*/

#include <iostream>
using namespace std;



class BankAccount{
    private:
    int accountNumber;
    string ownerName;
    double balance;
   
   
    public:
    BankAccount(int AC,string ON,double B){
        accountNumber=AC;
        ownerName=ON;
        balance=B;
        
    }
    
    
    
    void deposite(double amount){
        if(amount>0){balance+=amount;
        
    cout<<"the deposit successfull ";}
    
    else
    {cout<<"invalid deposite ";}
    }
    
 void withdraw(double amount){
     if (amount<=balance&&amount>0)
     {balance-=amount;
     cout<<"the widraw successfull ";}
     
     else
     {
         cout<<"invalid withdraw ";
     }
 }
  
  void show()const{
      cout<<"account number "<<accountNumber;
      cout<<"ownername "<<ownerName;
      cout<<"balance "<<balance;
      
     
  }
  
     
 };
    
    

int main()
{
    
    BankAccount BA(100,"Fatima",1000.100);
    
    BA.deposite(1000.100);
    BA.withdraw(500.0);
    BA.show();
    return 0;
}