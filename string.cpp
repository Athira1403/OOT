#include<iostream>
using namespace std;
int main()
{
   int n=0,f=1,j,i;
   char str[50],rstr[50];
   cout<<"enter string     \n";
   cin>>str;
   while(str[n]!='\0')
   {
       n++;
    }
    j=n-1;
    
    for(i=0;i<n;i++)
    {
       rstr[i]=str[j];
       j--;
    }
    for(i=0;i<n;i++)
    {
        if(str[i]!=rstr[i])
        {
           f=0;
             break;
        }
        else
          f=1;
    }
    cout<<"length is     "<<n<<"\n";
    cout<<"reverse string is   "<< rstr<<endl;
    if(f==1)
       cout<<"palindrome";
    else
        cout <<"not palindrme";
 }
