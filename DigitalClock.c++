#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
 
  int hr=11,min=59,sec=55;

  

  while(true)
  {
      system("cls");

    cout<<"Digital Watch "<<endl;

    cout<<hr<<":"<<min<<":"<<sec<<endl;
    sec++;

   if(sec==60)
   {
       min++;
       sec=0;

       if(min==60)
       {
           hr++;
           min=0;

           if(hr==12)
           {
               hr=0;
           }
       }
   }
   Sleep(1000);
     
  }
  return 0;

}