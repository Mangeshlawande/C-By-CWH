// Paraeterized constructors  in c++;
#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
     Complex(int x, int y);// Constuctor Declaration 
     void printNumber (){
        cout << "Your Number is  " << a << " + " << b << "i" << endl;

     }

};
Complex :: Complex(int x , int y)// --- > this is Parameterized  constructor which takes 2 Parameters.
{
    a = x; 
    b = y;

}

int main(){
    //Implicit call
  Complex a(4,6);  
  /// Explicit call 
  Complex b = Complex(5,8);
  a.printNumber();
  b.printNumber();

    return 0;
}