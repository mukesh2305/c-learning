//  temmplate =>
// the keyword template is used define function template and class template;
// it is a way to make your function or class generalize as data type is concern.

#include <iostream>
using namespace std;

// template <clasd type > type function(type a, type b)
template <class X>
X big(X a, X b)
{
    if (a > b)
        return a;
    else
        return b;
}

template <class A, class B>
B sum(A a, B b)
{
    return a + b;
}
int main()
{
    cout << big(4, 5) << endl;
    cout << big(5.6, 3.4) << endl;
    cout << sum(5, 0.7);
    return 0;
}