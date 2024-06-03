#include<iostream>
using namespace std;
// Function and function Prototypes in C++

 int sum(int , int );//  function declaration 
//  int sum(int q, int z);

void g (void);


// Function Prototype
// type function-name (arguments);

int main(){
      int num1, num2;// actual parameter are num1 and num2 
      cout <<"Enter  first number :" << endl;
      cin >> num1;
      cout << "Enter second number :"<< endl;
      cin >> num2;
      cout<< "The sum is :" << sum(num1,num2) <<endl;// function calling 
     
     g();
    return 0;
}
//function definition 
int sum (int a , int b){

    // formal parameters a and b will taken values from actual parameter num1 and num2 ;

    int c = a + b;
    return c;
}
void g (){
    cout << "Hello good , Morning !! " ;

}
