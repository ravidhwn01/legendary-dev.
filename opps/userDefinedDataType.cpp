#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Student{   // student is new user defined data type
public:
    string name;
    float marks;
    int rollNo;
 Student(){

 }

};

int main()
{
    Student john;  // john("john", 34,64)
    john.name = "john deo" ;
    john.marks = 54.4;
    john.rollNo = 23;

    // class object and constructor or function arguments


    
    return 0;
}