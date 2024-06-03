
// Static data members and Methods  in CPP  OOPS| #24
#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "\nEnter The Id : " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The Id of this Employee is : " << id << " and this is Employee Number count : " << count << endl;
    }
    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};
int Employee ::count; // defaultvalue is 0.

int main()
{
    Employee Ram, Ravi, Laxman;
    //   Ram.id;
    //   Ram.count;// coan't do this as id and count are private
    Ram.setData();
    Ram.getData();
    Employee :: getCount();

    Laxman.setData();
    Laxman.getData();
    Employee :: getCount();

    Ravi.setData();
    Ravi.getData();
    Employee :: getCount();

    return 0;
}