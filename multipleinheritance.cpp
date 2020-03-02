#include<iostream>
using namespace std;
class person
{
    private:
       char name[20];
       int age;
       char gender[20];
    public:
        void get()
        {
           cout<<"\nenter name ,age ,gender\n";
           cin>>name;
           cin>>age;
           cin>>gender;
         }
        void display()
        {
           cout<<"\nname is    "<<name;
           cout<<"\n\nage is    "<<age;
           cout<<"\n\ngender is  "<<gender;
        }
}; 
class department
{
  private:
         int salary;
         char depname[20];
         char designation[20];
  public:
        void get()
        {
            cout<<"enter salary,depart name,designation   \n\n";
            cin>>salary>>depname>>designation;
        }
        void display()
        {
           cout<<"\nsalary is   "<<salary;
           cout<<"\n departname   "<<depname;
           cout<<"\n designation   "<<designation;
        }
};
class employee:public person,public department
{
  public:
          void get()
          {
              person::get();
              department::get();
          }
           void display()
           {
              person::display();
              department::display();
            }
 };
 int main()
 {
    employee e;
    e.get();
    e.display();
    return 0;
 }
            
