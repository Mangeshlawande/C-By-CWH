// List in cpp STL
#include<iostream>
#include<list>
using namespace std;
    // List are bidirectional Linear in nature. 
    void display(list <int> &lst){
        list <int> :: iterator it;
        for (it = lst.begin();  it !=lst.end(); it++)
        {
            cout << *it<< " ";
            
        }
        cout<<endl;
    }
    
int main(){
      list <int> list1;// List of 0 length 
      list1.push_back(4);
      list1.push_back(3);
      list1.push_back(1);
      list1.push_back(77);
      list1.push_back(98);
      list1.push_back(129);
      display(list1);
    //   list1.pop_front();
//   list1.sort();
    // list1.remove(9);
    //   list1.pop_back();
      display(list1);
      
      list <int> list2(3); // Empty List of size 3

     list <int> :: iterator iter;
     iter = list2.begin();
     *iter =45;
     iter++;
     *iter =13;
     iter++;
     *iter =34;
     iter++;
     
    //  display(list2);

    // sorting  the list 
    //  list1.sort();
    //  list2.sort();

    // merging the list 
    //  list1.merge(list2);
    //  cout << " list1 after Merging ";
    //  display(list1);

// Reversing the list 
 list1.reverse();

    //   list<int> :: iterator iter;
    //   iter = list1.begin();
    //   cout <<*iter<<" " ;
    //   iter ++;
    //   cout<< *iter <<" ";
    //   iter ++;
    //   cout<< *iter <<" ";
    //   iter ++;
    //   cout<< *iter <<" ";
    //   iter ++;
    //   cout<< *iter <<" ";
    //   iter ++;
    //   cout<< *iter <<" ";

//  display(list1);

// 

    return 0;
}