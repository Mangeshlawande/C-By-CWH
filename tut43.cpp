// Ambiguity Resolution  in C++
#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you ?? " << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise Ho ?? " << endl;
    }
};

class Derived : public Base1, public Base2
{
public:
    int a;
    void greet()
    {
        Base1 ::greet();
    }
};

class B
{
    int a;

public:
    void say()
    {
        cout << "Hello World !!" << endl;
    }
};

class D : public B
{
    int a;
    // public:
    //   void say (){
    //     cout << "Have a Good day !"<< endl;
    // }
};

int main()
{
    // Ambiguity 1
    //  Base1 base1obj;
    //  Base2 base2obj;
    //  base1obj.greet();
    //  base2obj.greet();

    // Derived d;
    // d.greet();

    // Ambiguity 2

    B b;
    b.say();
    D d;
    d.say();

    return 0;
}