// Constructor with Default argument.
#include<iostream>
using namespace std;

class Simple{
    int data1,data2, data3;
  public:
  Simple(int a , int b=7, int c=4){
    data1 = a;
    data2 = b;
    data3 =c;

  }
   void printData();
};  void Simple :: printData(){
    cout << "The value of data is "<< data1 <<","<< data2 << " and "<< data3<<endl;
}


int main(){
      Simple s (1, 5);
      s.printData();
      Simple r (1);
      r.printData();

    return 0;
}