#include <iostream>
using namespace std;
// Code Example Samonstrating Virtual base Class in C++
/*
student  -->  Test    [Done]
student --> Sports    [Done]
Test -->    result    [Done]
sport -->   result    [Done]
*/
class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your Roll Number is : " << roll_no << endl;
    }
};
class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Your Result is Here :" << endl
             << "Maths:" << maths << endl
             << "Physics:" << physics << endl;
    }
};
    class Sports : public virtual Student
    {
    protected:
        float score;

    public:
        void set_score(float sc)
        {
            score = sc;
        }

        void print_score(void)
        {
            cout << "Your PT Score is :" << score << endl;
        }
    };
    class Result : public Sports, public Test
    {
        float total ;
     public : 
     void Display(void){
        total = maths + physics + score ;
        print_number();
        print_marks();
        print_score();
        cout << "your Total score is : "<<total<< endl;
     }
    };

int main()
{
   Result harry;
   harry.set_marks(87, 97);
   harry.set_number(520);
   harry.set_score(9);
   harry.Display();
    return 0;
}