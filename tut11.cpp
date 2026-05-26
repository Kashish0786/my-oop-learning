#include<iostream>
using namespace std;
// inline function
/*inline int product(int a, int b){
return a*b;
}
int main (){

    int a, b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<" The product of a and b is "<<product(a,b)<<endl;
    cout<<" The product of a and b is "<<product(a,b)<<endl;
    cout<<" The product of a and b is "<<product(a,b)<<endl;
    return 0;
}*/
    // static function 

/* int product(int a, int b){
    static int c=0;//it will execute only once 
    c=c+1;
    return a*b+c;
 }
 int main (){
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<" The product of a and b is "<<product(a,b)<<endl;
    cout<<" The product of a and b is "<<product(a,b)<<endl;
    cout<<" The product of a and b is "<<product(a,b)<<endl;
    return 0;
 } */
  
  inline int product( int a , int b){ //inline  funt^n is just like accepting or decling frnd request on insta or facebook
    return a*b;
  }
     float moneyReceived(int currentMoney , float factor=1.04){ /* default arguments :-  agar yaha jo float factor h ye pura hum 
     int currentMoney se phele likhenge to hame error dikkhayega to isliye hamesha default argument right side par rahenge like
     float factor=1.04*/
        return currentMoney * factor;
     }
    int main (){
    int a,b;
    int money = 100000;
    cout<<"If you have "<<money<<"Rs in your bank account , you will receive "<<moneyReceived(money)<<"Rs after 1 year";
    cout<<"For VIP:If you have"<<money<<"Rs in your bank account, you will receive"<<moneyReceived(money, 1.1)<<"Rs after 1 year";

    return 0;
    }

// constant arguments ; int strlen(const char *p){

//}
// int main ({
 //   ........
 //}