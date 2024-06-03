// C++ Objects Memory Allocation & Using arrays in Classes | C++ #23

#include <iostream>
#include <string>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    // void getPrice(void);
    void setPrice(void);
    void displayPrice(void);
};

void shop ::setPrice(void)
{
    cout << "Enter Id of your item no :" << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of Your item no:" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id " << itemId[i] << " is :" << itemPrice[i] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();

    return 0;
}