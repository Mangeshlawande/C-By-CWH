//Copy Constructor in c++ 
#include<iostream>
using namespace std;

class Number {
int a  =0;

public:
 Number(){}
   Number (int num){
    a = num;
   }
// When no copy constructor  is found , compiler suppliers its own copy constructor 
// copy constructor
   Number(Number &obj){
    cout << "copy constructor called !!"<< endl;
    a = obj.a;
   }
   void Display(){
    cout << "The Number for this Object is "<< a << endl;
   }
};


int main(){
      Number x(26), y(17), z(45);
      x.Display();
      y.Display();
      z.Display();
    // z1 should exactly resembles z or x or y
    Number z1(y);// copy constructor is invoked 
    z1.Display();
   // z2 = z ;// copy constructor not called.
   Number z3 = z;
   z3.Display();


    return 0;
}