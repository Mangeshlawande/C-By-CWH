//Reading and Writing Program Files in CPP
#include<iostream>
#include<fstream>
using namespace std;

/*
The useful Classes for working with files in c++ are :
1. fstreambase --> It is a base class 
2. ifstream --> It is derived from  fstresmbase class 
3. ofstream --> It is derived from  fstreambase class 

In order to work with Files in c++, you will have to open it , 
Primarly there are two ways to open a files :
1. Using the constructor 
2. Using the member function open() ofthe class :



*/

int main(){
    string st = "Hello and Welcome Dosto, to 5 Minutes Engineering, This is Tutorial 60 in c++ Full course,Which is Created by Code With Harry ";
    string st1;
    // open files using constructor and writing it ;
    ofstream out("sample60a.txt");//write operation 
    out << st;
    
    // // open files using constructor and reading from it ;
    // ifstream in("sample60.txt");//read operation 
    // // in>> st1;
    // getline(in, st1);
    // cout<< st1;
      
    return 0;
}