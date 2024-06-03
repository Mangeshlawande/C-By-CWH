// Vectors in CPP STL
#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    cout<<" Displaying this vector!"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<< v[i]<<" ";
        cout<< v.at(i) << " ";
    }
    cout<<endl; 
}
// void display(vector<int> &v){
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<< v[i]<<" ";
//     }
//     cout<<endl; 
// }

int main(){
      vector <int> vec1;// zero length vector 
      vector <char> vec2(4);//4 -element char vector
      vector <char> vec3(vec2);//4 -element char vector
    //   vector <double> vec4(4);//4 element double vector
      vector <int> vec4(6,13);// 6 ele vec of 3's
        int element, size = 4;
        // vec2.push_back('7');
       display(vec4);
    //   display(vec2);
    //   display(vec3);
    //   display(v);
    
    //     cout << "Enter the size of your vector: "<<endl;
    //     cin >> size;
    //   for (int i = 0; i < size; i++)
    //   {
    //     cout <<"Enter an element to add this vector :"<<endl;
    //     cin>> element;
    //     vec1.push_back(element);
    //   }
    //   vec1.pop_back();
    // vector<int> vec2;
    //   display(vec1);
     
    
    //   vector<int> :: iterator iter = vec1.begin();
    //   vec1.insert(iter,566);
    //   vec1.insert(iter+1,566);
    //   vec1.insert(iter+1,5,566);
    //   display(vec1);
      
    return 0;
}
