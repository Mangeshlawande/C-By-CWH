/*To do some basic math operations, we need to import header file <cmath>.
sqrt function --> It calculates the square root of a number.
pow function --> It calculates the exponent of a number. It takes two parameters - the number to be powered 
and the power which has to be raised to that number.

The code for the answer to this quiz:  
*/

#include<iostream>
#include <cmath>
using namespace std;

class Point{
    int x, y;
    friend float distance(Point, Point);
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }

};

float distance(Point p1, Point p2){
    return (sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2)));
}

int main(){
    int a1,b1,a2,b2;
    cout<<"Enter the coordinates of the first point with a space in between:\n";
    cin>>a1>>b1;
    Point p(a1, b1);
    p.displayPoint();

    cout<<"Enter the coordinates of the second point with a space in between:\n";
    cin>>a2>>b2;
    Point q(a2, b2);
    q.displayPoint();

    cout<<"The distance between these two points is "<<distance(p, q);
    return 0;
}