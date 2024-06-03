#include<iostream>
using namespace std ;
// for, while and do while loops in c++ 
int main ()
{
    // Loops in c++
    // 1. for loop
    // 2. while loop
    // 3. do while loop

// 1. syntax for(initialization; condition ; updation)
// { loop body (C++ code);}

    // for (int i = 1; i <= 40; i++)
    // {
    //     /* code */
    //     cout<< i<< endl;
    // }
    // while loop 
    // while (/* true */)
    // {
    //     /* code */
    // }
    // int i = 31;
    // while ( i<=40)
    // {
    //     cout << i <<endl;
    //     i++;
    // }
    int i=1;
    int n;
    cout << "Enter the Number :";
    cin >> n; 
    do
    {
    cout<< i * n<< endl;
    i++; 
    } while (i<=10);
    
    return 0;
}