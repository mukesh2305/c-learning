#include <iostream>

class student
{
private:
    int roll_no;
    char name[20];
    class Address
    {
    private:
        int hoseno;
        char city[20];

    public:
        void setAddress(int h, char *c)
        {
            hoseno = h;
            city = c;
        }

        void showAddress()
        {
            cout << "\n housno = " << houseno << " city = " << city;
        }
    };
    Address add;

public:
    void set_rollno(int r)
    {
        roll_no = r;
    }
    void set_name(int *n)
    {
        strcpy(name, n)
    }

    void set_address(int h, char *c)
    {
        add.setAddress(h, c);
    }
    void show_address()
    {
        cout << "Student Data" << endl;
        cout << rollno << " ";
        cout << name << " ";
        add.showAddress();
    }
}

int
main()
{
    // student::Address a1;
    student s1;
    s1.set_rollno(100);
    s1.set_name("mukesh");
    s1.set_address(301, "mumbai");
    s1.show_address();
}