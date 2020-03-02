#include<iostream>
using namespace std;
class DB;
class DM
{
  float m,cm;
  public:
  void input() 
  {   cout<<"enter values in m and cm\n";
    	cin>>m>>cm;
    	}
  friend void add(DB,DM);
};
class DB
{
  float feet,inches;
  public:
    void input()
  {
    cout<<"enter values in feet and inches\n";
    cin >>feet>>inches;
   }
   friend void add(DB,DM);
 };
 void add(DB g,DM h)
 {
  float convm,convcm;
   convm=(g.feet*0.3048);
   convm=convm+h.m;
   convcm=(g.inches*2.54);
   convcm=convcm+h.cm;
   cout<<"total value in metre\n"<<convm;
   cout<<"total value in cm\n"<<convcm;
  }
  int main()
  { 
    DB db;
    DM dm;
   db.input();
   dm.input();
   add(db,dm);
    return 0;
   }
  
