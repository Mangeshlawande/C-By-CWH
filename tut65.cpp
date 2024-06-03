// templete with multiple parameter 
#include<iostream>
using namespace std;
   
        /* CLASS TEMPLATE WITH MULTIPLE PARAMETERS( ONE , TWO, THREE, OR MORE)
        template <class T1, class T2>,......(CMMA SEPERATED )
        class NameOfClass{
            //body
        }
        */
        template <class T1, class T2>
        class myClass{

            public :
            T1 data1;
            T2 data2;
            myClass(T1 a, T2 b){
                data1 = a;
                data2 = b;
            }
            void display(){
                cout <<this->data1<<endl<<this->data2<<endl;
                // cout <<this.data1<<endl<<this.data2<<endl;// not workiing 
            }

        };
   
int main(){
      myClass<int, char> obj(1, 'J');
      obj.display();

    return 0;
}