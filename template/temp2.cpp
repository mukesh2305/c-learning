//  class template =>
// => class template is alo known as generic class

// syntax : template <class type> class class_name{...};

#include <iostream>
using namespace std;
template <class X>
class ArrayList
{

private:
    struct ControlBlock
    {
        int capacity;
        X *arr_ptr;
    };
    ControlBlock *s;

public:
    ArrayList(int capacity)
    {
        s = new ControlBlock;
        s->capacity = capacity;
        s->arr_ptr = new int[s->capacity];
    }

    void addElement(int index, X data)
    {
        if (index >= 0 && index < s->capacity)
            s->arr_ptr[index] = data;
        else
            cout << "\n Array index is not valid";
    }

    void showElement(int index, X &data)
    {
        if (index >= 0 && index < s->capacity)
            data = s->arr_ptr[index];
        else
            cout << "\n Array index is not valid";
    }

    void viewList()
    {
        int i;
        for (i = 0; i <= s->capacity - 1; i++)
            cout << " " << s->arr_ptr[i];
    }
};

int main()
{
    int data;
    ArrayList<int> list1(4);
    list1.addElement(0, 1);
    list1.addElement(1, 10);
    list1.addElement(2, 20);
    list1.addElement(3, 30);
    list1.showElement(0, data);
    cout << endl
         << "this is Element in the array x" << data << endl;
    cout << "now look at whole list" << endl;
    list1.viewList();
    return 0;
}