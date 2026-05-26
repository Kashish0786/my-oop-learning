//lec 30 
/* 
#include<iostream>
using namespace std;

class point{
    int x , y;
public:
    point ( int a, int b)
    {
    x=a;
    y=b;
    }
void displaypoint()
    {
    cout<<"The point is (" <<x<<", "<<y<<")"<<endl;
    }
};
// Q: create a function which takes 2 point objects and computes the distance between those points
// use c++  math sqrt  function & make frnd function.
int main (){
    point p(1,1);
    p.displaypoint();
    point q(4,6);
    q.displaypoint();

 return 0;
}

*/
#include<iostream>
#include<cmath>
using namespace std;

class point{
    friend void distance(point o1 , point o2);
    int x , y;
public:
    point ( int a, int b)
    {
    x=a;
    y=b;
    }
void displaypoint()
    {
    cout<<"The point is (" <<x<<", "<<y<<")"<<endl;
    }
};
void distance ( point o1, point o2){
    float dist;
    dist=sqrt(pow (o2.x-o1.x,2)+ pow( o2.y- o1.y,2));
    cout<<dist<<endl;
}
int main (){
    point p(1,1);
    p.displaypoint();
    point q(4,6);
    q.displaypoint();
    distance(p,q);
    return 0;
}