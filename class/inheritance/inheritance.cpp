// class is used to define property(variable or instance variables) and and behaviour(instance method)
// property name and value //int a = 10 // a is property name and 10 is a value

// Eg : car
//  properties         methods
//  ----------         --------------------------
//  price              setPrice()      getPrice()
//  fuel type          setFuelType()   getFuelType()
//  engine             setEngine()     getEngine()
//  color              setColor()      getColor()
//  capacity           setCapacity()   getCapacity()

// Inheritance = it is a process of inheriatance properties ....
// and behaviour of existing class into a new class.

// Tyeps of inheritance ---------------------------------
//  - single inheritance
// eg:
class A
{
};
class B : public A
{
};
class C : public B
{
};
//  - multilevel inheritance

//  - multiple inheritnace  = more than one parent class
// eg:
class A1
{
};
class A2
{
};
class B : public A1, public A2
{
};

//  - Hierarchical inheritance  = one parent class more than on child class
// eg:
class A
{
};
class B1 : public A
{
};
class B2 : public A
{
};

//  - Hybrid inheritnace

// ------------------------------------------------------
// VISIBILITY MODE =>
/*
Private
public
public
*/

// Types of user of a class =>
/*
- User 1 will create Object of your class
- User 2 will derived class from your class
*/

// .Avaliability vs Accessiblity
// private -----------
// ------------
// private member access to the same class but if someone.....
// built object of that class that person does not have access to the....
// private member only....
// available same case with person that is making child class for the that class....
// private member nnot acces by User 1 and User 2

// protected ------------
// -------------
/*
- protected not access By "User 1 ", but
- rotected member access by "User 2"
*/

// public
/*
- public member are access by User 1 and User 2
*/
