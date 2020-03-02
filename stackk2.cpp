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
          if (top<-1)
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
               space=size-top-1;
               cout<<"free space is    "<<space;
          }
          void display()
          {
            if(top==0)
              cout<<"empty stack";
            else
              cout<<"stack is  ";
              for(int i=0;i<=top;i++)
              {
                 cout<<" \n"<<num[i] ;
               }
           }
            void display2(stack e)
          {
            if(e.top<-1)
              cout<<"empty stack  ";
            else
              cout<<"stack is  ";
              for(int i=0;i<=e.top;i++)
              {
                 cout<<" \n"<<e.num[i] ;
               }
           }
};
int main()
{  int d;
  stack a1,a2;
  
do{    cout<<"\nenter \n1.push stack 1\n 2.push stack 2\n 3.pop stack 1\n4.pop stack 2\n 5.status of stack 1\n 6.status of stack 2\n 7.display stack 1\n8.display stack2\n9.exit\n    ";
     cin>>d;
  switch(d)
  {
     case 1: cout<<"enter stack 1\n\n\n";
              a1.push();
              
               break;
     case 2: cout<<"enter stack 2\n\n\n";
               a2.push(); 
               break;
     case 3:   cout<<"delete stack 1\n\n\n";
               a1.pop();
               break;
     case 4:   cout<<"delete stack 2\n\n\n"; 
                a2.pop();
                break;
     case 5:   cout<<"status of stack 1\n\n\n";
                a1.status();
               break;
     case 6:     cout<<"status of stack 2\n\n\n";
                a2.status();
                 break;
     case 7:    cout<<"display stack 1\n\n\n";
                 a1.display();
                  break;
     case 8:   cout<<"display stack 2 \n\n \n"; 
                a1.display2(a2);
                  break;
     
     case 9: 
          
            break;
   }
 }  while(d!=9);
 return 0;  
}            


          
