#include <iostream>
using namespace std;

// More on C++ friend function ;
// Forward Declaraion 
class Y;
class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(X,Y);
};
class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    friend void add(X,Y);
};

 void add (X o1, Y o2){
    cout << "The summing of datas of X and Y Objects Gives me :"<< o1.data + o2.num<< endl;
 }
int main()
{
    X a1 ;
    a1.setValue(3);
    Y b1;
    b1.setValue(5);
  
   add(a1, b1);


    return 0;
}