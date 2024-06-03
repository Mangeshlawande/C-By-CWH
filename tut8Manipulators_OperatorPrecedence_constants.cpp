#include <iostream>
#include <iomanip>
using namespace std;
// constants manipulators and operator precedence
int main()
{

    //  Constants
    // const int a = 9;
    // cout << "The value of a is " << a << endl;
    // const float pi = 3.142;
    // cout << "The value of pi is " << pi << endl;

    // *********** Manipulators *******
    // int a = 3, b = 67, c = 1234;
    // cout << "The value of a without setw is " << a << endl;
    // cout << "The value of b without setw is " << b << endl;
    // cout << "The value of c without setw is: " << c << endl;

    // cout << "The value of a with setw is :" << setw(4) << a << endl;
    // cout << "The value of a with setw is :" << setw(4) << b << endl;
    // cout << "The value of a with setw is :" << setw(4) << c << endl;
    //   system ("cls");

    // operator precedence  ==> 'n.cpp reference.com'
    int a = 3, b = 6;
    int c = (((a * 5) + b) - 34) + 87;
    cout << c;

    return 0;
}