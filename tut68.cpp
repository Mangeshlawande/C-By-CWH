// Member function Template & overloading Templet function  in Cpp
#include<iostream>
using namespace std;
template <class T>
class Harry{
    public:
    T data ;
    Harry(T a){
       data  = a;
    }
    // void display(){
    //     cout<< data<< endl;
    // }
    void display();


};

// outside the class 
  template <class T>
  void Harry <T> :: display(){
    cout<< data<<endl;
  }

void func(int a){
   
    cout << "Its first Function ()=> "<< a<<endl;
}

template <class T>
void func1( T a){
    cout<< "It's Templatised Function ()=> "<<a<< endl;
}


int main(){
    //   Harry<int> h(85);
    //   Harry<char> h('U');
    //  cout<<h.data<<endl;
    //  h.display();
    func(7);// Exact Match Takes  Highest Priority ;
    func1(56);// Exact Match Takes  Highest Priority ;
    return 0;
}