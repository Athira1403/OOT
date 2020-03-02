#include<iostream>
using namespace std;

class shopping
{ 
   char itemname[30];
   float item_code;
   float total;
   float price;
 public:
   shopping()
   {
       item_code=0;
       price=0;
       total=0;
      
    }
   void getitems()
   {
     cout<<"enter details\n";
     cout<<"enter name\n";
     cin>>itemname;
     cout<<"enter itemcode\n";
     cin>>item_code;
     cout<<"enter price\n";
     cin>>price;
    }
    void remove(int a)
    {
      if(item_code==a)
      {
         price=0;
      }
    }
   
    void display()
    {
     
     cout<<"item name is\n";
     cout<<itemname;
     cout<<"\nitem code is\n";
     cout<<item_code;
     cout<<"\nitem price is\n";
     cout<<price;
     }
  };
     
   int main()
   { int r,n,itemno,p;
      cout<<"enter no of items\n";
      cin >>n;
     shopping s[n];
          
     do
     {  cout<<"select options\n\n";
        cout<<"1.enter items in th elist\n 2.remove \n3.display items in list \n4.exiit\n\n";
        cin>>r;
        switch(r)
        {
           case 1: for(int i=0;i<n;i++)
                   s[i].getitems();
                   break;
           
           case 2: cout<<"enter item no to be rempoved\n";
                   cin>>itemno;
                   
                   for(int i=0;i<n;i++)
                   {
                     s[i].remove(itemno);
                   }
                   break;
                   
                   break;
           case 3: cout<<"the elements in list are\n";
                   for(int i=0;i<n;i++)
                   s[i].display();
                   break;
           case 4: 
                   break;
         }
       }  while(r!=4);
        return 0;
    }
     
       
      
