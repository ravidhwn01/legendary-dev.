#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void basic(){
int a = 45;
    int b = 3;
    int* x;
    int* y;

    x = &a;
    y = &b;
    cout<<x<< " "<<y<<" ";
    // cout<<x +y; // can not add two addresses 
}
void arrayBasic(){
    int a[] = {23,35,676,9,807,54,3};
    cout<<a+1<<endl;
    cout<< &a<< endl;
    cout<< a<< endl;
}
int main()
{
    // basic();
    arrayBasic();
    return 0;
}