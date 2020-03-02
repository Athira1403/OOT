#include<iostream>
using namespace std;
class cricket
{
  char name[20];
  float totalruns;
  float totalmatches;
  float battlingavg;
 public:
  cricket()
  {
     totalruns=0;
     totalmatches=0;
  }
  void enter()
  {
     cout<<"enter details of cricketers\n\n";
     cout<<"\nenter name    ";
     cin>>name;
     cout<<"\nenter total runs   ";
     cin>>totalruns;
     cout<<"\nenter total matches   ";
     cin>>totalmatches;
  }
  void display()
  {  battlingavg=totalruns/totalmatches;
     cout<<"\n enter name   ";
     cout<<name;
     cout<<"\nenter total runs   ";
     cout<<totalruns;
     cout<<"\nenter total matches    ";
     cout<<totalmatches;
     cout<<"\naverage battling     ";
     cout<<battlingavg;
  }
  };
   int main()
   { int r,n;
      cout<<"enter no of cricketerss\n";
      cin >>n;
     cricket s[n];
          
     do
     {  cout<<"\n\nselect options\n\n";
        cout<<"1.enter details\n 2..display  \n3.exiit\n\n";
        cin>>r;
        switch(r)
        {
          case 1: for(int i=0;i<n;i++)
                   s[i].enter();
                   break;
          case 2: cout<<"the elements in list are\n";
                   for(int i=0;i<n;i++)
                   s[i].display();
                   break;
          case 3:
                   break;
         }
      }while(r!=3);
   }
  
