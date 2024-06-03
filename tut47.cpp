// Create 2 classes
/* 1. SimpleCalculator -
Take input of two number using utility function and performs +,-,*,/ and Display the result
 using another function.

   2. ScientificCalculator - Take input of two number using a utility function  and perform any scientific
   operation of your choice, and Display the result using another function.

   Create another class HybridCalculator and inherit it using these 2 classes :
   Q1. What type of inheritance are you using --> Multiple Inheritance
   Q2. Which mode of inheritance are you using. -->  public SimpleCalculator, public ScientificCalculator
   Q3. Create an object of hybridCalculator and Display result of simple and scientific Calculator.
   -->>
   Q4. How is code reusibility Implemented ?


*/
#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    int a, b;

public:
    void getDataSimple()
    {
        cout << " Enter the value of a :" << endl;
        cin >> a;
        cout << "Enter the value of b :" << endl;
        cin >> b;
    }

    void PerformOperationsSimple()
    {
        cout << "The value of a + b is : " << a + b << endl;
        cout << "The value of a - b is : " << a - b << endl;
        cout << "The value of a * b is : " << a * b << endl;
        cout << "The value of a / b is : " << a / b << endl;
    }
};

class ScientificCalculator
{
    int a, b;

public:
    void getDataScientific()
    {
        cout << " Enter the value of a :" << endl;
        cin >> a;
        cout << "Enter the value of b :" << endl;
        cin >> b;
    }

    void PerformOperationsScientific()
    {
        cout << "The value of cos(a) is : " << cos(a) << endl;
        cout << "The value of sin(a) is : " << sin(a) << endl;
        cout << "The value of exp(a) is : " << exp(a) << endl;
        cout << "The value of tan(a) is : " << tan(a) << endl;

        cout << "The value of cos(b) is : " << cos(b) << endl;
        cout << "The value of sin(b) is : " << sin(b) << endl;
        cout << "The value of exp(b) is : " << exp(b) << endl;
        cout << "The value of tan(b) is : " << tan(b) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
    int a;
    int b;
};

int main()
{
    //   SimpleCalculator calc;
    //   calc.getDataSimple();
    //   calc.PerformOperationsSimple();

    //   ScientificCalculator calc1;
    //   calc1.getDataScientific();
    //   calc1.PerformOperationsScientific();

    HybridCalculator calc;
    calc.getDataScientific();
    calc.PerformOperationsScientific();
    calc.getDataSimple();
    calc.PerformOperationsSimple();

    return 0;
}