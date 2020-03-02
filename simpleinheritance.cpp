#include<iostream>
using namespace std;
class person
{
    private:
       char name[20];
       int age;
       char gender[20];
    public:
        void getperson()
        {
           cout<<"\nenter name ,age ,gender\n";
           cin>>name;
           cin>>age;
           cin>>gender;
         }
        void display()
        {
           cout<<"\nname is "<<name;
           cout<<"\n\nage is"<<age;
           cout<<"\n\ngender is"<<gender;
        }
};
class student:public person
{
  int mark1,mark2,mark3, total;
  public:
    void input()
    {
       cout<<"enter marks\n ";
       cin>>mark1>>mark2>>mark3;
       total=mark1+mark2+mark3;
    }
    void display()
    {
       person::display();
       if(total>=90)
          cout<<"\nresult is oustanding";
       else if(total<90 && total>=80)
          cout<<"\nresult is excellent";
       else if(total<80 && total>=70)
          cout<<"\nresult is very good";
       else if(total<70 && total>=60)
          cout<<"\nresult is good";
       else if(total<60 && total>=50)
          cout<<"\nresult is average";
       else if(total<50 && total>=45)
          cout<<"\nresult is pass";
      else
          cout<<"\nfail";
     }
 };
 int main()
 {
   student S;
   S.input();
   S.getperson();
   S.display();
   return 0;
 
       
    }

