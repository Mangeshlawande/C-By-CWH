 // OOPs Recap snd Nesting of Member function in c++
 
 // oops - Classes and Objects

    // c++ --> was initially called --> C with classses by stroustroup
    // Classes is extension of structures (in C)
    // structure had limitations
    //    -->> members are public
    //    -->>no methods
    // classes = structures + more
    //      -->>can have methods and propreties
    //       -->> can make few members as public and few as  private
    // structueres in C++ are typedef
    // you can declare objects along with the class declaration

    //    class Employee {
    // class declaratiion
    //    } harry,  rohan ,etc;

    // harry.salary = it makes no sense if salary is private;
    // nesting of member function


#include <iostream>
#include <string>
using namespace std;

class binary
{
    // by default class member is private
    private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones_complement(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number :" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
   
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format !!" << endl;
            exit(0);
        }
    }
}

void binary ::ones_complement(void)
{
     chk_bin(); //nesting function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout<< "Display your binary Number :"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout <<s.at(i);
        
    }
    cout<< "\n";
}
int main()
{
   
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_complement();
    b.display();

    return 0;
}