#include<iostream>
using namespace std;
# define size 10
 
class stack
{ 
   int num[size];
  int top;
   public:
   stack(){top=-1;}
       void push()
       {
          int item;
          cout<<"enter item to be inserted  ";
          cin>>item;
          if(top==10)
          {
             cout<<"stack is full   ";
          }
          else
          {
             num[++top]=item;
          }
        }
        void pop()
        {  int del;
          if (top==0)
          {
             cout<<"stack is empty  ";
          }
          else
          {
             del=num[top];
             top--;
           }
         }
         void status()
         {  int space;
            if(top>10)
              cout<<"stack is full  ";
            else if(top<-1)
               cout<<"stack is empty   ";
            else
               space=size-top;
               cout<<"free space is    "<<space;
          }
          void display()
          {
            if(top==0)
              cout<<"empty stack";
            else
              cout<<"stack is";
              for(int i=0;i<=top;i++)
              {
                 cout<<" \n"<<num[i] ;
               }
           }
};
int main()
{  int d;
  stack a1;
  
do{    cout<<" enter 1.push\n 2.pop\n 3.status \n4.display\n 5.exit\n     ";
     cin>>d;
  switch(d)
  {
     case 1:  a1.push();
               break;
     case 2:  a1.pop();
               break;
     case 3:  a1.status();
               break;
     case 4:   a1.display();
                    break;
     case 5:   break;
           default:   cout<<"invalid\n";
   }
 }  while(d!=5);
 return 0;  
}            


          
