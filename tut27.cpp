//friend classes and member friend function in c++
#include<iostream>
using namespace std;

// forward declaration 
class complex;

class calculator {
public :
int  add(int a , int b){
    return (a+b);
}
int sumRealComplex(complex , complex );
int sumCompComplex(complex , complex );
    
};
class complex {
    int a;
    int b;

    // Individully declaring function as friends

    // friend int calculator :: sumRealComplex(complex o1, complex o2);
    // friend int calculator :: sumCompComplex(complex o1, complex o2);

    // Alter : Declaring entire Calculator class as friend ;
    friend class calculator ;
    public:
    void setNumber(int n1, int n2){
        a = n1;
        b = n2;  
    }
    friend complex sumComplex(complex o1, complex o2);
    void printNumber(){
        cout << "Your Number is "<< a << " + " << b <<"i"<< endl;
    }
};

 int calculator :: sumRealComplex(complex o1, complex o2){
    return (o1.a + o2.a);
}

 int calculator :: sumCompComplex(complex o1, complex o2){
    return (o1.b + o2.b);
}


int main(){
      
      complex o1 , o2 ;
      o1.setNumber(1,3);
      o2.setNumber(5,7);
      
      calculator calc;
      int res = calc.sumRealComplex(o1,o2);
      cout << "The  sum of sum real part of o1 and o2 is " << res<< endl;

      int resC = calc.sumCompComplex(o1,o2);
      cout << "The  sum of sum Complex part of o1 and o2 is " << resC<< endl;
    return 0;
}