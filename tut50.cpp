#include<iostream>
using namespace std;

class Base{

};

int main(){
      //Basic Examples : On pointers 
      int a = 4;
      int * ptr = &a;
      *ptr = 999;
      cout << "The value of  a  is : " << *(ptr)<< endl;
      // new Operator : or 
      int *p = new int (50);
      float*t = new float (50.09);
      cout << "The value at address p is :"<<*(p)<< endl;
      cout << "The value at address t is :"<<*(t)<< endl;

      int *arr = new int[3];
      arr[0] = 10;
      *(arr+1) = 120;//   arr[1] = 20;
      arr[2] = 30;
      arr[3] = 40;
    //   delete [] arr;// delete keyword--> It released dynamically allocated Block of memory;
      cout << "The value of arr[0] is "<< arr[0]<< endl;
      cout << "The value of arr[1] is "<< arr[1]<< endl;
      cout << "The value of arr[2] is "<< arr[2]<< endl;
      cout << "The value of arr[3] is "<< arr[3]<< endl;

    return 0;
}