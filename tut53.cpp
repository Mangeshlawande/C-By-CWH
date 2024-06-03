//  (this) pointer in c++ || #53
#include<iostream>
using namespace std;
class A{
int a ;
public :
// A &setData(int a){//Explicitly calling object. 
void setData(int a){
 this->a = a;
//  return *this; 
 // in c++ importance gives local variables.
// (this ) is a keyword which is pointer which points to the objects which invoke the member function .  
}

void getData(){
    cout << " The value of a is "<< a<<endl;
}
};
int main(){
      A a;
    //   a.setData(5).getData();
      a.setData(6);
      a.getData();
    return 0;
}