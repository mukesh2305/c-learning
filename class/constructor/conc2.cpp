// Default Constructor ----
//  - if Object is created than constructor is created
//  - if we donot have any constructor than also compiler create constructor;
//  - Constructor created by compiler does not have any arguments
//  - we create min single constructor in the class than compiler does not create any constructor in the class
// Parameterized Constructor
// Constructor Overloading

// -----------------------------------
// compiler make 2 constuctor in the class
//   -  defalult constructor
//   -  copy constructor

// -----------------------------------------------------
// if we have created min 1 constructore but it is not copy constructore in the class than compiler
//  not create default constructore in the class but
//  it create copy constructore in the class

// --------------------------------------------
// but if we created copy constructore in the class than compiler does not
// create any constructore in the class (defalut and copy both constructore compiler not create)

class Complex
{
private:
    int a, b;

public:
    // this is constructor overloading
    // two version of constructor is avilable here
    // this same as function overloading
    // if we created single constructore in the class than compiler does not create constructor in the class
    Complex(int x, int y) // this is parametarize constructor
    {
        a = x;
        b = y;
    }
    Complex(int k) // this is parametarize constructor
    {
        a = k;
    }

    // this is default constructor
    // now c3 not give any error because we cretated default constructor
    Complex()
    {
    }

    // copy constructore
    Complex(Complex &c1)
    {
        a = c1.a;
        b = c1.b;
    }
};

int main()
{
    // we are not passing any value in the c3 so this we create error
    //  so we have to make one constructor in this we are not passing  any arguments;

    Complex c1(3, 4), c2(5), c3;
    Complex c4(c1);
    // Complex c4 = c3; same as Complex c4(c1);
    //  we can right this way also;
    // Complex c1 = Complex(3, 4);

    return 0;
}