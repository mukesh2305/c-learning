// in this case static memory allocation/compilte time memory allocation happen
// that means when programe is compile that time it decide that how many byte of memory assign to this programe
// pros: this is usefull when we know how much byte of memory wre want than this is very usefull

// using declaration statement we can make SMA variable
int x; // decaration statements
float y;
Complex c2;
Student s1;

// Dynamic memory allocation : DMA -------------------

// we can not do dynamic memory allocation(DMA) using decalaration statement
// this is decide on the run time how much memory programe want
// this memory is not fixed
// using DMA how much memory we want we can create

// how to make dynamic memory allocation in c++ -------------------------

int *p = new int;
float *q = new float;
Complex *ptr = new Complex;
// using new keyword created variable does not containt any name
// if we want int type dynamic variable than storing that varibale we want int type of pointer variable
// eg: p = 1000 // show 100 is address of int
// p containt address of int type variable
// p static but it containt address of dynamic int

// we can create array using new keyword---------
float *q = new float[5];

// we can also do to input array size from user------------
int x;
std::cin >> x;
int *p = new int[x];

// --------------------------
//  => delete -- is used to relaease  memory of only DMA variabmles
// SMA variable memory is decide when the progrmae or block is finishied than memory is also destroyed
// but that is not case with the DMA variable in this case we have to release the memory of DMA  variables.using delete keyword

// p is pointer name
// if write delete p than p is not deleting p is pointing variable that varible is deleting
delete p;
delete[] p;