#include<iostream>
using namespace std;
class student
{  int rollno;
   char name[20];
   public:
       void get()
       {
          cout<<"enter name\n.roll no\n";
          cin>>name;
          cin>>rollno;
       }
       void display()
       {
          cout<<"\nname is "<<name;
          cout<<"\nroll no is"<<rollno;
       }
};
class test:public student
{
  public:
     int sub1,sub2;
     void get()
     { 
        cout<<"\nenter subjects marks";
        cin>>sub1>>sub2;
        student::get();
        
     }
     void display()
     {
        student::display();
        
     }
};
class result:public test
{
  public: 
       int total;
       
       void get()
       {
            test::get();
       }
       void display()
       {   
          total=sub1+sub2;
          test::display();
          cout<<"\ntotal is"<<total;
        }
 };
 int main()
 {
    result r;
    r.get();
    r.display();
    return 0;
 }
