#include<iostream>
using namespace std;
// Structure , union and Enum in C++

 typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;

} ep;

 union money
{
    /* data */
    int rice;//4
    char car;//1
    float pounds;//4
    // we can use one of them out of three 

};

int main(){
    // enum
    enum Meal{ breakfast, lunch, dinner} ;
    // Meal m1= lunch;//{0, 1,  2 }
    // Meal m1= dinner;//{0, 1,  2 }
    // Meal m1= breakfast;//{0, 1,  2 }
    // cout << (m1==0)<<endl;

//     cout << breakfast << endl;
//     cout << lunch << endl;
//    cout << dinner << endl;

    // Union 
    union money m1;
    m1. rice =34;

    m1.car = 'y';// we can use one at time 
    // cout << m1.rice << endl;
    cout << m1.car<< endl;

  // STRUCT

      ep soham;
      struct employee harry;
      struct employee mangesh;
      struct employee rohan;
      harry.eId=1;
      mangesh.eId=2;
      harry.favChar ='G';
      mangesh.favChar ='O';
      harry.salary = 20000000;
      mangesh.salary = 120000000;
      cout <<"The value is "<<harry.eId<< endl;
      cout <<"The value is "<<harry.favChar<< endl;
      cout <<"The value is "<<harry.salary<< endl;
      cout <<"The value is "<<mangesh.eId<< endl;
      cout <<"The value is "<<mangesh.favChar<< endl;
      cout <<"The value is "<<mangesh.salary<< endl;


// Union --> provide better memory management 


    return 0;
}