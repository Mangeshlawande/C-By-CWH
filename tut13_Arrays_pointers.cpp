#include<iostream>
using namespace std;
// Arrays and pointers Arithematics in C++ 
int main(){

// Arrays examples 

      int marks[] = { 23, 25, 21,27, 28};
      int mathMarks[5] ;
       mathMarks[0] = 67;
       mathMarks[1] =75;
       mathMarks[2] =77;
       mathMarks[3] =87;
       mathMarks[4] =85;
       mathMarks[5] =91;
   cout << "These are math marks "<<endl;
    //    cout << mathMarks[0] << endl;
    //    cout << mathMarks[1] << endl;
    //    cout << mathMarks[2] << endl;
    //    cout << mathMarks[3] << endl;
    //    cout << mathMarks[4] << endl;
    //    cout << mathMarks[5] << endl;

       // you can change the value of an array 

    //   cout << marks[0] << endl;
    //   cout << marks[1] << endl;
    //   cout << marks[2] << endl;
    //   cout << marks[3] << endl;
    //   cout << marks[4] << endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << marks[i] << endl;
    // }
    // int i= 0;
    // while ( i<5)
    // {
    //     /* code */
    //     cout <<  << "The value of marks " <<i<< "is" << marks [i] << endl;
    //     i++;
    // }
    
    // pointers and arrays 
    int * p = marks;
    cout << *(p++)<< endl;
    cout << *(++p) << endl;
    // cout << "The value of   *p is "<< *p<< endl;
    // cout << "The value of  *(p+1) is "<< *(p+1)<< endl;
    // cout << "The value of  *(p+2) is "<< *(p+2)<< endl;
    // cout << "The value of *(p+3) is "<< *(p+3)<< endl;
    // cout << "The value of *(p+4) is "<< *(p+4)<< endl;
     
     



    return 0;
}