

//C++ header files and Operetors

// two types of header files :
// 1.systen Header files : comes with compiler.
#include<iostream>
// 2.user defined HEADER FILES: written by programmer
//#include"this.h" //gives error if its not present in current directory;
// 'cpp reference for header files' websites.

using namespace std;

int main (){
    int a = 12, b = 6;
    
    cout <<" operators in c++ !!" << endl;
    cout <<" followingsre the types of operators in c++." << endl;
    // Arithematic operators.
    cout << "\nThe value of a + b is :" << a+b ;
    cout << "\nThe value of a - b is :" << a-b ;
    cout << "\nThe value of a * b is :" << a*b ;
    cout << "\nThe value of a / b is :" << a/b ;
    cout << "\nThe value of a % b is :" << a%b ;
    cout << "\nThe value of a++ is :" << a++ ;
    cout << "\nThe value of ++a is :" << ++a ;
    cout << "\nThe value of a-- is :" << a-- ;
    cout << "\nThe value of --a is :" << --a ;
// Assignment operators  => used to assign values to variables.
//   system("cls");
// comparison operator 
    cout << " \nFollowing are the  comparison operator \n";
    cout << "\nThe value of a == b is :" << (a==b) ;
    cout << "\nThe value of a != b is :" << (a!=b) ;
    cout << "\nThe value of a >= b is :" << (a>=b) ;
    cout << "\nThe value of a <= b is :" << (a<=b) ;
    cout << "\nThe value of a > b is :" << (a>b) ;
    cout << "\nThe value of a < b is :" << (a<b)<<endl;

// logical  operator 
    cout << "\nFollowing are the  logical operator \n";
    cout << "\nThe value of ((a == b) && (a<b)) is :" <<((a==b) && (a<b));
    cout << "\nThe value of ((a != b) && (a>b)) is :" << ((a!=b) && (a>b));
    cout << "\nThe value of ((a==b) || (a<b)) is :" <<((a==b) || (a<b));
    cout << "\nThe value of ((a!=b) || (a>b)) is :" << ((a!=b) || (a>b));
    cout << "\nThe value of (!(a == b)) is :" << (!(a==b)) ;

    return 0;

}