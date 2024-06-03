// map function in cpp  
#include<iostream>
#include<string> 
#include<map>

using namespace std;
    // Maps store key value pair 
    // It is an assiciative array
int main(){
    map <string , int >  marksMap;
    marksMap["Harry"] = 76;
    marksMap["Mangesh"] = 98;
    marksMap["Rohan"] = 69;
    marksMap.insert({{"Jack", 88}, {"Oggy", 99}});
    map<string, int> :: iterator iter;

    for (iter  = marksMap.begin(); iter!= marksMap.end(); iter++)
    {
      cout<<(*iter ).first << " " << (*iter).second<< "\n";
    }
    cout << "The size is : "<< marksMap.size()<<endl;
    cout << "The max_size() is : "<< marksMap.max_size()<<endl;
    cout << "The empty's return value  is : "<< marksMap.empty()<<endl;

      
    return 0;
}