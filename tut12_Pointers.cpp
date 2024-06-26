#include<iostream>
using namespace std;
// Pointers in C++ 

int main(){
    // what is pointer ? --> DT which holds address of other datatypes
    int a = 4 ;
    int * b = &a;
    // & --> (address of) operator 
    cout << "The address of a is :"<< &a<< endl;
    cout << "The address of a is :"<< b <<endl;

    // * -->  (value at) dereference operator 
    cout << "The  value at address b is :"<< *b <<endl;

    // pointer to pointer
     int ** c = &b;
     cout << "The address of a is " << &b<< endl;
    cout << "The address of a is " << c << endl;
    cout << "The value at address  c is " << *c << endl;
    cout << "The value at address value_at( value_at(c)) is " << **c << endl;
    
    return 0;
}