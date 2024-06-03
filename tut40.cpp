// Multilevel Inheritance  Deep dive with code Example in C++
#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_rollnumber(int);
    void get_rollnumber(void);
};

void Student ::set_rollnumber(int r)
{
    roll_no = r;
}

void Student ::get_rollnumber()
{
    cout << "The roll_number is " << roll_no << endl;
}
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::get_marks()
{
    cout << "The marks obtained in maths are :" << maths << endl;
    cout << "The marks obtained in physics are :" << physics << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void Display_result()
    {
        get_rollnumber();
        get_marks();
        cout << "Your percentage is :" << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{
    /*
    Notes :
       If we inheriting B from A and C from B: B[A --> B --> c ]
      1.A is the base class for B and B is the base class for C.
      2. ABC is called Inheritance Path
    */

    Result harry;
    harry.set_rollnumber(343);
    harry.set_marks(88.90, 76.80);
    harry.Display_result();
    return 0;
}