#include<iostream>
using namespace std;
// variable scope and datatypes 
  int glo = 5;

  void sum (){
    int a= 8;
    cout << glo;
  }
int main ()
{
    int glo = 9;
    glo = 76;
    int a = 15 , b= 14;
    float pi = 3.142;
    char c = 'u';
    bool is_true = true;

    sum ();
     system("cls");
    cout << glo <<"\n";
    cout << is_true<<endl;
    // precedence goes to local variable.
   cout <<"This is tutorial 4.\n the value of a is :"<<a <<". \n The value of b is:"<< b
   <<endl;
   cout <<"\nThe value of pi is : " << pi ;
   cout << "\n The value of c is : " << c;
   return 0;

}