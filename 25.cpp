#include<iostream>
using namespace std;
// Arrays of object as Function arguments in C++

class Employee {
      int id ;
      int salary;

    public :
    void setId(void){
        salary = 22222;
        cout << "Enter the Id of Employee : " << endl;
        cin>> id;
    }
    void getId(void){
        cout <<" The Id of Employee is :"<< id << endl;
        cout <<" The salary of Employee is :"<< salary << endl;

    }
};
int main(){
      Employee fb[4];
      for (int i = 0; i < 4; i++)
      {
        fb[i].setId();
        fb[i].getId();
      }
      
    return 0;
}