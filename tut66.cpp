// Tmplate with default parameter 
#include<iostream>
using namespace std;
   template <class T1 = int, class T2 = float, class T3 = char>
  class harry{
      public:
      T1 a;
      T2 b;
      T3 c;
      harry(T1 x, T2 y,T3 z){
        a = x;
        b = y;
        c = z;
      }
      void display(){
        cout << "\nThe value of a is "<< a << endl;
        cout << "The value of b is "<< b << endl;
        cout << "The value of c is "<< c << endl;
      }

  };

int main(){
     harry < > h(2, 4.5, 'H');
     h.display();     
     harry <int, char,char> k(2, 'G', '0');
     k.display();     

    return 0;
}