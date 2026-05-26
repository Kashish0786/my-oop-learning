//lec 44
/*
VIRTUAL BASE CLASS 

            class A 
              (a)
        |             |
    class B         class C
      (a)             (a)
       |               |
            class D
            (a) (a)
    ( yaha D me do a aayega ek B ka and ek C ka  par D to koi ek hi use karega na isliye hum virtual base class use 
    karenge aur A ko virtual base class bana denge jiske wajah se D me sirf ek hi a jaayega )
    
SYNTAX OF VIRTUL BASE CLASS
     class B : virtual public A
     {
    .............
    };
    
    class C : virtual  A
    {
    .............
    };

EXAMPLE 
          student 
    |                |
  test            sports
    |                 |
          result 

student : virtual base class 
*/
