//Lec 46
//Constructor in derived class 

/*
1.If base class constructor does not have any arguments , there is no need of any constructor in derived class
2. But if there are one or more arguments in the base class constructor , derived class need to pass argument 
to the base class constructor .
3. If both base and derived classes have constructors , base class constructor is executed first.

CONSTRUCTOR in multiple and multilevel inheritence 
1. In MULTIPLE  inheritence , base classes are constructed in the order in which they appear in class declaraion.
( jise phele declare kiya h wo phele  run hoga )
2. In MULTILEVEL inheritence , the constructor are executed in the order of inheritence ( A-->B-->C--> ).

SPECIAL SYNTAX 
1. c++ supports special syntax for passing arguments to multiple base classes

derived constructor (arg1,ag2,arg3,...): base1-constructor(aeg1, arg2), base2-constructor(arg3, arg4)
{
............
} base1-constructor(arg1, arg2)

example 
A(a1,a2)-->B(b1,b2)-->C(c1,c2)

C kashish(1,2,3,4,5,6)
C(a1,a2,b1,b2,c1,c2): B(b1,b2), A(a1,a2)
{
.....................
}

SPECIAL CASE OF VIRTUAL BASE CLASS
1.The constructor for virtual base classes are invoked before an nonvirtual base class 
2.If there are multiple virtual base classes , they are invoked in the order declared.
3.Any non virtual base class are then constructed before the derived class constructor is executed .*/