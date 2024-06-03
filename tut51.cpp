// pointers to object and arrow operators in c++

#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData(void)
    {
        cout << "The real part is :" << real << endl;
        cout << "The Imaginary part is :" << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    //   Complex c1;
    //   Complex *ptr = &c1;
    Complex *ptr = new Complex;
    //   (*ptr).setData(2,4);// is Exactly same as
    ptr->setData(23, 42);
    //   (*ptr).getData();// is as good as
    ptr->getData();

    // Array  of objects-->

    Complex *ptr1 = new Complex[4];

    ptr1->setData(99, 2);
    ptr1->getData();

    return 0;
}