#include <iostream>
using namespace std;
// basic input and output and more

int main (){
    int num1 , num2, sum=0;
    // '<<' is called insertion operator.
    cout << "Enter the value of num1:\n";
    cin >>num1;
    // '>>' is called extraction operator.
     cout << "Enter the value of num2:\n";
    cin >>num2;
    sum = num1 + num2;
    cout << "The sum is :"<< sum <<endl;
// system("cls");
    return 0;
 
}