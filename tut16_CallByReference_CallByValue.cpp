#include<iostream>
using namespace std;
// Call by value call by Reference in C++
int sum (int a , int b){
    int c = a + b ;
    return c;
}

//This will not swap a and b 
void swap (int  x , int y){
    int temp = x ;
    x = y;
    y = temp;
}
// Call by reference using pointers
void swapPointer(int * x , int * y){
    int temp = *x ;
    *x = *y;
    *y = temp;
}
// Call by reference using C++ reference variables.
// int &   // 
void swapReferenceVar(int & x , int & y){
    int temp = x ;
    x = y;
    y = temp;
    // return y;
}

int main() {

    int  a = 5 , b = 10;// actual arguments
    //   cout << "The sum of Two integer is : "<< sum (4,5) <<endl;
    cout << "\nThe value of a is "<< a <<" and the value of b is "<< b << endl;
    // swap (a,b);  //actual argument is copied into formal argument 
    //  swapPointer(&a, &b);//swap a and b using pointer reference 
    //   swapReferenceVar(a, b);//swap a and b using  reference variables
    //   swapReferenceVar( a, b) = 342;//swap a and b using  reference variables
    cout << "The value of a is "<< a <<" and the value of b is "<< b << endl;

    return 0;
}