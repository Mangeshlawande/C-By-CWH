// Initialization List in Constructors in C++
#include<iostream>
using namespace std;
/*
Syntax for Initiatization List in Constructor :
constructor  (argument-List ) : Initialization section 
{
    assignment  + other Code ;

};
class Test{
    int a;
    int b;
    public:
     Test (int i, int j) : a(i), b(j){
        cout<< "Constructor Executed !!"<<endl;
     }
}

*/

class Test{
    int a;
    int b;
    public:
     Test (int i, int j) : a(i)
    //  Test (int i, int j) : a(i), b(i+j)
    //  Test (int i, int j) : a(i), b(i*j)
    //  Test (int i, int j) : a(i), b(a+j)
    //  Test (int i, int j) : b(j), a(i + b)// garbage value  bcoz a will initialized first;
     { 
         b = j;
        cout << "Constructor Executed !!"<<endl;
        cout << "The value of a is "<< a << endl;
        cout << "The value of b is "<< b << endl;
     }
};
int main(){
      Test t(4, 6);


    return 0;
}