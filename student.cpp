#include<iostream>
using namespace std;
class student
{
   static int num;
   int studroll;
   char studname[100],studbranch[100];
   public:
      void accept()
      {
      cout<<"enter name";
      cin>>studname;
      cout<<"enter roll no";
      cin>>studroll;
      cout<<"enter branch name";
      cin>>studbranch;
      num++;
      }
      void disp()
      {
      cout<<"\nname is     "<<studname<<"\nroll no is    "<<studroll<<"\nbranch is     "<<studbranch<<"\n";
      }
      static int count()
      {
        return num;
        }
 };
 int student::num;
 int main()
 {
    student o[10];
    cout<<"1.add \n2.display\n3.exit";
    int c,i=0,j,a;
    do{
        cout<<"enter choice\n";
        cin>>c;
        switch(c)
        {
           case 1: if(student::count()<10)
                      o[i++].accept();
                   else
                       cout<<"list full\n";
                        break;
           case 2:  j=student ::count();
                    for(a=0;a<j;a++)
                       o[a].disp();
                       cout<<"total np of students"<<j<<endl;    
                       break;
           case 3 : break;
              
            }
       }
       while(c!=3);
       }
