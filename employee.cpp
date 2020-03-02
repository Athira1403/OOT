#include<iostream>
using namespace std;
class employee
{
   char name[50];
   char designation[50];
   int age;
   int salary;
   public:
         void input()
         {
            cout<<"enter details \n";
             cout<<"enter name ";
             cin>>name;
             cout<<" enter designation ";
            cin>>designation;
             cout<<"enter age  ";
            cin>>age;
             cout<<" enter salary ";
            cin>>salary;
            cout<<endl;
          }
         void display()
         {  
            cout<<"details of employees are \n \n ";
            cout<<"name is"<<name<<endl;
            cout<<"designation is"<<designation<<endl;
            cout<<"age is"<<age<<endl;
            cout<<"salary is"<<salary<<endl;
          }
};
int main()
{ int n,i;
  employee s[n];
  cout<<"enter limit of employees";
  cin>>n;
  for(i=0;i<n;i++)
  {
    s[i].input();
    
  }
  for(i=0;i<n;i++)
  {  
  s[i].display();
  }
 }        
  
