#include<iostream>
using namespace std;

int c = 100;
int main()
{
    int a, b, c;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    c = a + b;
    cout << "The sum is " << c << endl;

    // Scope resolution operator is used to use the global variable 
    cout <<"The global c is " << ::c << endl; // :: is scope resolution operator

    float d = 45.3;
    long double e = 45.3;
    cout << "The value of d is " << d << "\n The value of e is " << e << endl;
}