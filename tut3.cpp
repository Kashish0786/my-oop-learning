#include<iostream>

using namespace std;
int main(){
    int age;
    cout<<"Tell me your age";
    cin>>age;
    //cout<<" this tutorial is 9"
    //SELECTION CONTROL STRUCTURE: IF ELSE- IF ELSE LADDER
  /* int age;
    cout<<"Tell me your age";
    cin>>age;
    if(age<18){
        cout<<"You can not come to my party";

    }
    else if (age==18){
        cout<<"You are a kid and you will get a kid pass to the party";

    }
else{
    cout<<"you can come to the party";

}*/ 


//SELECTION CONTROL STRUCTURE: SWITCH CASE

switch(age)
{
//case 18:
    //code
   // cout<<" You are 18";
   // break;
 case 22:
    cout<<" You are 22";
   // break;

 default:
 cout<<"No special cases";
   // break;

}
}
