#include<iostream>
using namespace std;

    // structure 
   typedef  struct employee
     {
        /* data */
        int Id;
        char favChar;
        float salary;
     }ep;
     
    // typedef use karenge to ep use karenge other wise nahi
    //typedef ka simple meaning hai ki jise phele hum struct employee kehte hai ab use hum ep keh sakte hai

//union
      
      union money
     {
        /* data */
        int rice;//4byte
        char car;//1byte
        float pounds;//4byte
     };
/* union me ek wakt par sirf ek value print hogi for example agar hum car and rice dono ke 
value to print karwayenge to ek garbage value dega */
    int main(){
        enum meal{ breakfast, lunch , dinner};
         meal m1=breakfast;
         cout<<m1<<endl;// nrml condition
         cout<<(m1==0)<<endl;//true gives 1
         cout<<(m1==2)<<endl;//false =0

        meal m2=lunch;
        cout<<m2<<endl;// nrml condition
        cout<<(m2==1)<<endl;//true gives 1
        cout<<(m2==2)<<endl;//false =0
    

      //  cout<<breakfast;
      //  cout<<lunch;
      //  cout<<dinner;





     //   ep kshish;
     //   union money m1;
      //  m1.rice=34;
      //  cout<<m1.rice;



    /*   struct employee kashish;
        kashish.Id =1;
        kashish.salary = 1200000;
        kashish.favChar = 'k';
        cout<<kashish.favChar<<endl;
        cout<<kashish.salary<<endl;*/

    
    return 0;
}