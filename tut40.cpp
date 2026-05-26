//Lec 50
// revisiting pointers : new & delete keywords 

#include<iostream>
using namespace std;
int main (){
    //basic example 
    int a = 4;
    int*ptr = &a;

    cout<<"The value of a is "<<*(ptr)<<endl;

    //new keyword or new operator
    int *p = new int(40);
    cout<<"The value at adress p is "<<*(p)<<endl;

   /* int *arr = new int[3]; //ek time koi ek code run karenge 
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl; */

    //delete operator

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    delete[] arr;

    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

    return 0;
}