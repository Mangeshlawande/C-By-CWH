// File I/O in C++ | Read / Write in same program & closing Files 
#include<iostream>
#include<fstream>
using namespace std;



int main(){
    // connecting our file with hout stream;
    ofstream hout("sample61.txt");

    //creating a name string  and filling with string Entered by user;
    cout<< "Enter your name :"<<endl;
    string name ;
    cin>> name;

    // writing string to the file 
    hout << name + " is my name ";
    hout.close();

    ifstream hin("sample61.txt");
    string content;
    hin >> content;
    // getline(hin, content);
    cout << "The content of the file is :"<<content;

    hin.close();

    return 0;
}