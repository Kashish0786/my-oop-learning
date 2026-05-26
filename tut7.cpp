#include<iostream>
using namespace std;
int main (){
    //array
    int marks[]={1,2,3,4};
   /* int mathmarks[4];
    mathmarks[0]=23;
    mathmarks[1]=13;
    mathmarks[2]=233;
    mathmarks[3]=263;

    cout<<"These are math marks";
   cout<<mathmarks[0];
    cout<<mathmarks[1];
    cout<<mathmarks[2];
    cout<<mathmarks[3];
//you can change the value of an arry 
  /*  cout<<"These are marks";
    cout<<marks[0];
    cout<<marks[1];

    marks[2]=222;

    cout<<marks[2];
    cout<<marks[3];*/

// using loop
/*   for (int i = 0; i < 4; i++)
    {
        /* code 
        cout<<"The value of marks"<<i<<" is "<<marks[i]<<endl;

    }
    */
  /* int i=0;
   while (i<=3)
   
   {
    /*code
    cout<<marks[i]<<endl;
    i++;
   }*/
   

   // do while 
  /* int i=0;
   do
   {
    /* code 
    cout<<marks[i]<<endl;
    i++;

   } while (i<4);*/

   // pointer and arry
   int*p=marks;
   cout<<*(p++)<<endl;
   cout<<*(++p)<<endl;
 //  cout<<"The value of marks [0] is "<<*p;
 //  cout<<"The value of marks [0] is "<<*(p+1);
  // cout<<"The value of marks [0] is "<<*(p+2);
 //  cout<<"The value of marks [0] is "<<*(p+3);

   

  return 0;

}  

