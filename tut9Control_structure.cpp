#include<iostream>
using namespace std;
// C++ control structures , if else switch-case statement 

int main (){
    cout <<"This is tutorial 9.";
    int age ;
    cout << "Enter your age :"; 
    cin >> age ;

    // selection control structure :  if else -if ladder
    // if ((age<18 ) && (age >0)){
    //     cout << "You cannot come to My party>";
    // }
    // else if (age ==18) {
    //     cout << " Get a kid pass to the party.";
    // }
    // else if (age<1) {
    //     cout << " You are not yet born.";
    // }

    // else{
    //     cout << "You can come to the party"; 
    // }


    // selection control structure :  switch case statement

    switch (age)
    {
    case 18:
        cout<< "You are 18.";
        break;
    case 22:
        cout<< "You are 22.";
        break;
    case 15:
        cout<< "You are 15.";
        break;
    default: cout << " No special cases .";
        break;
    }
    return 0;
}