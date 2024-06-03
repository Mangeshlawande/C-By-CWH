// pointer to Derived class  in CPP
#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Display base class variable var_base ::" << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Display base class variable var_base :" << var_base << endl;
        cout << "Displaying the Derived class variable var derived " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_Class_Pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_Class_Pointer = &obj_derived; // pointing  base class pointer to derived class
    base_Class_Pointer->var_base = 54;
    // base_Class_Pointer->var_derived = 54; // will thrown an error
     base_Class_Pointer->display();

     DerivedClass * derived_Class_pointer;
     derived_Class_pointer= & obj_derived;
     derived_Class_pointer->var_base = 90;
     derived_Class_pointer->var_derived =73;
     derived_Class_pointer->display();

    return 0;
}