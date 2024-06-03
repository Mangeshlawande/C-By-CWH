// Virtual function in cpp

#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base =70;
   virtual void display()
    {
        cout << "1.Display base class variable var_base :" << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_derived=90;
    void display()
    {
        cout << "2.Display base class variable var_base :" << var_base << endl;
        cout << "2.Displaying the Derived class variable var derived " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_Class_Pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_Class_Pointer = &obj_derived;
    base_Class_Pointer->display();
    return 0;
}
