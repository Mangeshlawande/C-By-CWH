#include<iostream>
using namespace std;

class c2;

class c1{
    int val1 ;
    friend void exchange (c1 &, c2 &);
    public:
    void inData(int a){
        val1 = a;

    }
    void display (void){
        cout << val1 <<endl;
    }
};
class c2{
    int val2 ;
    friend void exchange (c1 &, c2 &);
    public:
    void inData(int a){
        val2 = a;

    }
    void display (void){
        cout << val2 <<endl;
    }
};
/*  
Trick to swap 2 numbers a and b 
temp = a ;
a = b ;
b = temp ;

*/
void exchange(c1 & x, c2 &y){
int temp = x.val1;
x.val1 = y.val2;
y.val2 = temp;
}

int main(){
      c1 oc1 ;
      c2 oc2;

      oc1.inData(14);
      oc2.inData(67);
      exchange(oc1,oc2);
      cout << "The value c1 after Exchanging Becomes :" ;
       oc1.display();
      cout << "The value c2 after Exchanging Becomes :";
       oc2.display();
    return 0;
}