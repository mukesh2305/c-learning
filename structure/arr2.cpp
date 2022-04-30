// #include <iostream>
// int main()
// {
//     // demostrate array element are store contigious location

//     int arr[5], i;

//     std::cout << "Size of integer in this compiler is "
//               << sizeof(int) << "\n";

//     for (i = 0; i < 5; i++)
//         std::cout << "Address arr[" << i << "] is " << &arr[i] << "\n";

//     return 0;
// }

// two ways to traverse array

#include <iostream>

int main()
{
    int arr[6] = {11, 12, 13, 14, 15, 16};
    // Way 1

    for (int i = 0; i < 6; i++)
    {
        std::cout << arr[i] << " ";
    }

    // Way 2
    std::cout << "By Other Method:";

    for (int i = 0; i < 6; i++)
        std::cout << i[arr] << " ";

    return 0;
}