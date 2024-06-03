//Inheritance  Syntax & visibility mode in C++
#include<iostream>
using namespace std;

// Base class
class Employee{
    public :
    int id;
    float salary ;
    Employee(int impId){
        id = impId;
        salary = 999988;
    }
    Employee(){}
};
//Derived class syntax:
/* class {{derived class-name }} : {{visibility-Mode}} {{base class-name}}
class members/methods/etc...,
Note:
1. Default visibility mode is private 
2. Private visibility mode : public member of the base class becomes Private member of derived class
3. public visibility mode  : public member of the base class becomes  Public member of derived class
3. Private member are never been Inherited.

*/

// Creating a programmer class derived from Employee base class.

class Programmer : Employee{
    public :
    Programmer(int impId){
        id = impId;
    }
    int languageCode = 9;
    void getData(){
        cout <<id<<endl;
    }
};
int main(){
      Employee harry(3),mohan(6);
      cout << harry.salary<<endl;
      cout << mohan.salary<<endl;
      Programmer Skillf(10);
      cout <<Skillf.languageCode<<endl;
      Skillf.getData();
    return 0;
}