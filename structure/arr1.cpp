//  structure is collection of disimliar elements or simliar elements
//  structure is a way to group variables
//  structure is used to create data types
//  structure is not-primitive tyoe data type

// if we want to store record than we can use structure for that

// #include <iostream>
// // #define ARRAYSIZE(array) (sizeof(array) / sizeof(array[0]))
// int main()
// {
//     int arr[10];
//     int n = 10;
//     int arr1[n];
//     std::cout << ARRAYSIZE(arr) << ARRAYSIZE(arr1);
// }

#include <iostream>
using namespace std;
int main()
{
    // int arr[5] = {5, 8, 1, 3, 6};
    int arr[] = {5, 8, 1, 3, 6};

    // example 1 : =>
    int arr[6] = {1, 2, 3, 4};
    // both are same
    int arr[] = {1, 2, 3, 4, 0, 0};

    // => accessing array elements ------------------------------------
    int ar[5];
    ar[0] = 5;
    ar[2] = -10;

    // this is same as arr[1] = 2
    arr[3 / 2] = 2;
    arr[3] = arr[0];

    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3];

    // Error part in the array ans c++ ---------------------------------------

    int arr[2] = {10, 20, 30, 40, 50}; // this is will give error in the c++
    return 0;

    // cout << "just checking " << *(&arr + 1) << " " << *(&arr) << endl;

    // *(&arr + 1) = containt address after 5 element in the array = (address of 6th element)
    // arr = containt address of 1st element
    // show = 6 - 1 = 5 this is the length of array
    // int len = *(&arr + 1) - arr;
}
