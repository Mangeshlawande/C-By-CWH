// File I/O in C++: open and eof()  function |[eof = end of files ]
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // for writing of files 
      ofstream out;
      out.open("sample61.txt");
      out << "Welcome to Coding World!!!"<< endl;
      out << "This is tutorial number 62 !!!"<< endl;
      out.close();


     ifstream in ; 
     string st,st2;
     in.open("sample61.txt");
     in >> st>>st2; 
     cout << st << st2;

     while(in.eof()==0){
        getline(in, st);
        cout<<st<<endl;
     }
     
     in.close();


    return 0;
}