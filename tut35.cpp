// Destructor in c++ with an Examples.

#include<iostream>
using namespace std;
int count = 0;

// Destructor never takes an argument not does it return any value
class num {
    public :
    num(){
        count++;
        cout<<"This is the time When constructor is called for object Number !!"<<count<<endl;
    }
    ~num(){
        cout<<"This is the time when my Destructor is called for the Object Number !!"<< endl;
        count --;
    }
};

int main(){
      cout <<"We are inside our Main function "<<endl;
      cout << "Creating first Object n1"<<endl;
      num n1;
      {
        cout << "Entering This Block !!" << endl;
        cout <<" Creating Two more Objects"<< endl;
        num n2 , n3 ;
        cout << "Exiting This Block !!"<< endl;
      }
    cout << "Back to main"<< endl;
    return 0;
}