// Multiple in heritance Deep Dive .
#include <iostream>
using namespace std;
// one object is derved from Two distinct objects.  ==> Multiple Inheritance

/*
Syntax  for inheriting in multiple inheritance :
class Deriverd : visibility-mode base1 , visibility-mode base2
{
  class body of class " derived"
} ;
*/
class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class Base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The value of Base1 is : " << base1int << endl;
        cout << "The value of Base2 is : " << base2int << endl;
        cout << "The value of Base2 is : " << base3int << endl;
        cout << "The sum of these value  is : " << base1int + base2int + base3int << endl;
    }
};

/*
The Inherited  Derived class will be something Look like this
base1int --> Protected
base2int --> Protected
Member Functions:
 set_base1int() --> Public
 set_base2int() --> Public
 set_show ()    --> Public
*/
int main()
{
    Derived harry;
    harry.set_base1int(5);
    harry.set_base2int(15);
    harry.set_base3int(10);
    harry.show();

    return 0;
}