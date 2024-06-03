#include<iostream> 
using namespace std ;
//Reference Variables and typecasting 

int c = 56;

int main() {
    //  int a , b, c=0;

    // // '<<' is called insertion operator.
    // cout << "Enter the value of a:\n";
    // cin >> a;
    // // '>>' is called extraction operator.
    // cout << "Enter the value of b:\n";
    // cin >>b;
    // c = a + b;
    // cout << "The sum is :"<< c <<endl;
    // cout << "The global c is :"<< :: c <<endl;

    // // ************float , double and long double Literals****************
    //  float d = 34.4f;
    //  long double e = 34.4l; 
    // //  d=34.45f; // by default double is there.

    // cout << "\nThe size of 34.4  is:" << sizeof(34.4);
    // cout << "\nThe size of 34.4f is:" << sizeof(34.4f);
    // cout << "\nThe size of 34.4l is:" << sizeof(34.4l);
    // cout << "\nThe size of 34.4F is:" << sizeof(34.4F);
    // cout << "\nThe size of 34.4L is:" << sizeof(34.4L);
    // cout << "\nThe value of d is "<< d << "\nThe value of E is :" << e;


    // ************Reference variables ****************
    //  system("cls");
    // alias >> nickname like  rohan -- > Monty --> Hard coder 
    float x = 45.5 ;
    float & y = x ;
    
    cout << x << endl;
    cout << y << endl;
     // ************ Typecasting ****************
     int a = 56;
     float b = 56.34;
     cout << "The value of a is : " << (float)a << endl;
     cout << "The value of a is : " << float(a) << endl;
     cout << "The value of b is : " << (int)b << endl;

     int c = int(b);
     cout << " The expression is  :" << a + b << endl; 
     cout << " The expression is  :" << a +(int) b << endl; 
     cout << " The expression is  :" << a + int(b) << endl; 
    return 0;

}