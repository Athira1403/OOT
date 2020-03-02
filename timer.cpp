#include<iostream>
using namespace std;
class timer
{
   int hr,min,sec;
  public:
    timer()
   {
     hr=0;
     min=0;
     sec=0;
   }
   timer(int a,int b,int c)
   {
     hr=a;
     min=b;
     sec=c;
   }
   void display()
   {
     cout<<"time is "<<hr<<":"<<min<<":"<<sec;
   }
   friend void add(timer c1,timer c2)
   {
     timer c;
     c.hr=c1.hr+c2.hr;
     c.min=c1.min+c2.min;
     c.sec=c1.sec+c2.sec;
     if(c.hr>24)
     {
       c.hr=c.hr%24;
     }
     if(c.min>=60)
     {
      c.min=c.min%60;
     }
     if(c.sec>=60)
     {
       c.sec=c.sec%60;
     } 
     
     cout<<"total time is "<<c.hr<<":"<<c.min<<":"<<c.sec;
    }
 };
 int main()
 {
    timer c1(3,30,30);
    timer c2(3,45,30);
    c1.display();
    
    c2.display();
    add(c1,c2);
  }
