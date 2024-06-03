#include<iostream>
using namespace std;
//Inline Function ,Default argument & Constant argument in C++;

   inline int product(int x, int y){
// inline => useful for short function code call 
// not recommended for Recursion and Static variables 
// static int c = 0;// initialized(execute) only  once  
// c = c + 1;// Next time this function is run , the value of c will retained.
    return x*y ;
}

float moneyRecieved( int currentMoney , float factor= 1.04){
    return currentMoney * factor;
}

// int strlen(const char * p){
// }

int main(){
    //   int a = 10 , b = 5;
    int a,b;
//   cout << "Enter the value of a and b : " << endl;
//   cin>> a >> b;
//   cout << "The product of a and b is :" << product(a, b)<<endl;
   int money = 100000;
   cout <<"\nIf you have "<< money << " Rs in your bank account, you will receive "<< moneyRecieved(money)
        <<" Rs after 1 year "<< endl;
   cout <<" For VIP:If you have "<< money <<" Rs in your bank account, you will receive "
        << moneyRecieved(money,1.1) <<" Rs after 1 year "<< endl;
// 
    return 0;
}