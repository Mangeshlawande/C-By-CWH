#include<iostream>
using namespace std;

// Function Overloading With Examples in C++
int sum(float q, int r){
    cout << "Using function With 2 arguments :"<<endl;
    return q + r;
 }

 int sum(int a, int b , int c){
    cout << "Using function  with 3 arguments :"<< endl;
    return a + b + c;
 }
// volume of cylinder is 3.142 *r*r*h
int volume (float r , int h){
    return (3.14 * r * r * h);
}
// volume of cuboid 
int volume (int a){
    return (a*a*a);
    
}
// rectangular box 
int volume (int l , int b, int h){
    return (l*b*h);

}



int main(){
      
      cout << "The sum of 3 and 6 is :" << sum (3,6)<<endl;
      cout << "The sum of 3 ,4 and 6 is :" << sum (3,4,6)<<endl;
      cout << "The volume  of cylinder r = 3 and h = 5  is : " << volume(3,5)<<endl;
      cout << "The volume  of cube is a = 5 :" << volume(5)<<endl;
      cout << "The volume  of rectangle l = 3,b = 5 and h = 9 is : " << volume(3,5,9)<<endl;

     //   cout << "The volume  of cube is  " << volume(3,5)<<endl;

    return 0;
}