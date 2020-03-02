#include<iostream>
using namespace std;
class rectangle
{
  float length;
  float breadth;
  public:
     void setlength(float len)
     {
       length=len;
     }
     void setwidth(float wid)
     {
       breadth=wid;
     }
     float perimeter ()
     {
        return(2*length+2*breadth);
      }
      float area()
      {
        return(length*breadth);
      }
      void show()
      {
        cout<<"\nlength is   "<<length;
        cout<<" \n width is  "<<breadth;
       }
       int same_area(rectangle r)
       {
          float area1,area2;
          area1=length*breadth;
          area2=r.length*r.breadth;
          return(area1==area2)?1:0;
        }
 };
 int main()
 {
   rectangle r1,r2;
   r1.setlength(5);
   r1.setwidth(2.5);
   r2.setlength(5);
   r2.setwidth(18.9);
   r1.show();
   cout<<"\narea is  "<<r1.area();
   cout<<"\nperimeter is   "<<r1.perimeter();
   r2.show();
    cout<<"\narea is   "<<r2.area();
   cout<<"\nperimeter is   "<<r2.perimeter();       
   if(r1.same_area(r2))
   {
     cout<<"\n area is same  ";
   }
   else
   cout<<"\n not same  ";
   r1.setlength(15);
   r1.setwidth(6.3);
   r1.show();
    cout<<"\n area is  "<<r1.area();
   cout<<"\n perimeter is   "<<r1.perimeter();
   r2.show();
    cout<<"\n area is  "<<r2.area();
   cout<<"\n perimeter is   "<<r2.perimeter();       
   if(r1.same_area(r2))
   {
     cout<<"\n area is same  ";
   }
   else
   cout<<"\nnot same";
   return 0;
 }
   
   
     
