#include<iostream>
using namespace std;
class complex
{
   int x,y;
   public:
           complex()
           {
              x=0;
              y=0;
           }
           complex(int real,int img)
           {
              x=real;
              y=img;
           }
           complex operator +(complex);
           void display();
};
  complex complex ::operator+(complex c)
    {
       complex temp;
       temp.x= x+c.x;
       temp.y=y+c.y;
       return(temp);
    }
   void complex::display(void)
   {
     cout<<x<<"+i"<<y<<"\n";
   }
   int main()
   {
      complex c1,c2,c3;
      c1=complex(2,3);
      c2=complex(5,8);
      c3=c1+c2;
      c1.display();
      c2.display();
      c3.display();
      return 0;
    }
