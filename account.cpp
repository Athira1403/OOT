#include<iostream>
using namespace std;
class account
{
  char name[50];
  int bal;
  int moneyd;
  int moneyw;
  int accno;
  int balance;
  int finalbalance;
  public:
      void details()
      {
         cout<<"enter details   "<<"\n";
         cout<<"enter name  ";
         cin>>name;
         cout<<" \n enter account no   ";
         cin>>accno;
         cout<<"\nenter money to deposit";
         cin>>bal;
         if(bal<1000)
         {
            cout<<"\namount is less than minimum balance";
         }
       }
       void deposit()
       {
         cout<<"enter deposit amount";
         cin>>moneyd;
         balance=moneyd+bal;
        }
        void withdraw()
        {
           cout<<"enter withdraw amount";
           cin>>moneyw;
           if(moneyw>bal)
           {
              cout<<"cannot withdraw amount";
           }
        }
        void display()
        {
          finalbalance=balance-moneyw;
          cout<<"final amount is"<<finalbalance<<"\n";
        }
 };
 int main()
 {
    account A;
    A.details();
    A.deposit();
    A.withdraw();
    A.display();
    return 0;
 }
         
