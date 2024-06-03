#include<iostream>
using namespace std;

class Complex {
    int a, b;
    public :
    /* Creating a constructor Consrtuctor is a special member function with the same name as of 
    the class .
    It is used to initialized the Objject of its class 
    It is automatically invoked Whenever the objected is created 

    */
   Complex (void);// constructor declaration 
     void printNumber(){
        cout << "Your Number is :"<< a << " + " << b << "i" << endl;

     }
};
Complex :: Complex(void)// --- > this is default constructor which takes no arguments.
{
    a = 10 ;
    b = 20;

}


int main(){
    Complex c1,c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}

/*  Characteristics  of constructors 
1. It should be declared in  the ublic section of the class 
2. They are automatically invoked whenever the Object is created 
3. They cannot return values and Do not have return types 
4. It can have default arguments We cannot refers to their address.
*/