#include<iostream>
using namespace std;
class unary
{
   int a;
   public:
     void getdata(int i)
     {
     a=i;
     }
     void operator-();
     void display();
};
void unary::display()
{
  cout <<a<<"\n";
}
void unary::operator-()
{
 a=-a;
}
int main()
{
   unary s;
   s.getdata(10);
   s.display();
   -s;
   s.display();
   return 0;
}
