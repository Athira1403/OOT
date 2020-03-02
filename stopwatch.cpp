#include<iostream>
#include<time.h>
using namespace std;
class abc
{
  clock_t start_t,end_t;
  float total_t;
  public:
     abc()
       {
          start_t=0;
          cout<<"time"<<start_t<<endl;
       }
     void start()
     {
       start_t=clock();
     }
     void stop()
     {
        end_t=clock();
     }
     void show()
     {
       total_t=(float)(end_t-start_t)/CLOCKS_PER_SEC;
       cout<<"time is "<<total_t<<endl;
     }
     ~abc()
     {
       total_t=(float)(end_t-start_t)/CLOCKS_PER_SEC;
         cout<<"time is "<<total_t<<endl;
      }
 };
 int main()
 {
   abc s;
   cout<<"1 for start\n";
   int i;
   cin>>i;
   if(i==1)
        s.start();
   cout<<"0 for stOP\n";
    cin>>i;
   if(i==0)
        s.stop();
   s.show();
   return 0;
  }
   
       
