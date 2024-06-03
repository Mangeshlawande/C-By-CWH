//Arraysof objects using pointers in C++ | 
#include<iostream>
using namespace std;
class ShopItem{
   int id ;
   float price;
   public:
   void setData(int a, float b){
    id = a;
    price = b;

   }
    void getData(void){
       cout<< "The  code of this item is :"<< id <<endl;
       cout<< "The  Price of this item is :"<< price <<endl;

    }

};
int main(){
     int size = 3;
     // int *ptr = & size;
    //  int * ptr1 = new int[54];
/*       general store items;
         veggies  items
         hardware items
*/

/* 1    2   3
               ^
               |
               |    
              ptr
ptrTemp
*/
      ShopItem *ptr = new ShopItem[size];
       ShopItem *ptrTemp = ptr;
      int i,p ;
      float q;
      for ( i = 0; i < size; i++)
      {
        cout<< "Id and price of item are :" <<i+1<< endl;
        cin>> p>>q;

        // (*ptr).setData(p,q);
        ptr->setData(p, q);
        ptr++;
      }
      
      for ( i = 0; i < size; i++)
      {
        cout << "Item Number :"<< i+1<< endl;
        ptrTemp->getData();
        ptrTemp++;
        

      }
      

      
    return 0;
}