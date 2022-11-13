// ##### There are two types of header files:
// 1. System header files: It comes with the compiler
// 2. User defined header files: It is written by the programmer

// #include <this.h> // This is custom header file
#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 4;
    // Opertors in C++ 
    // Arithmetic operators
    cout<<"The value of a + b is " << a + b << endl;
    cout<<"The value of a - b is " << a - b << endl;
    cout<<"The value of a * b is " << a * b << endl;
    cout<<"The value of a / b is " << a / b << endl;
    cout<<"The value of a % b is " << a % b << endl;
    cout<<"The value of a++ is " << a++ << endl;
    cout<<"The value of a-- is " << a-- << endl;
    cout<<"The value of ++a is " << ++a << endl;
    cout<<"The value of --a is " << --a << endl;

}