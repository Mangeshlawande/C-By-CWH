#include <iostream>
using namespace std;
// Recursion and Recursive Function in C++

// recursion => function call itself repeatedly.
//  example for recursion
//  1. factorial
//  2. fibonacci sequence

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
/*
step by step calculation of factorial
factorial(4) = 4 * factorial(3)
factorial(4) = 4 *  3 * factorial(2)
factorial(4) = 4 *  3 * 2 * factorial(1)
factorial(4) = 4 * 3 * 2 * 1;
factorial(4) = 24
*/

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}
/*
fib(5)
fib(4) + fib (3)
fib(2) + fib (3) + fib (2) + fib (3)

*/

int main()
{ /*
factorial of a number :
6! = 6*5*4*3*2*1 = 720
0! = 1
1! = 1
n! = n * (n-1)!
*/
    int a;

    cout << "Enter a Number :" << endl;
    cin >> a;
    // cout << "The factorial of "<<a<<" is"<< factorial(a) << endl;
    // cout << "The term in fibonacci sequence at position " << a << " is " << fib(a) << endl;
    cout << "The term in Factorial at position " << a << " is :" << factorial(a) << endl;

    return 0;
}