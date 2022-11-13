// Scope of a variable is the region in code where the existence of variable is valid.
// Based on scope we have local and global variables in C++
// Local Variables: Local variables are declared inside the braces of any function and can be accessed only from there.
// Global Variables: Global variables are declared outside any function and can be accessed from anywhere.
// Can global and local variable have same name in C++?: Yes!
#include <iostream>
using namespace std;

int global = 6; // This is a global variable
void printNumber()
{
    cout << global << endl;
}
int main()
{
    int i = 30;
    float f = 2.4;
    char c = 'a'; // Store only one character in char data type

    cout << "Value of i is " << i << endl;
    cout << "Value of f is " << f << endl;
    cout << "Value of c is " << c << endl;
    int global = 0; // This is a local variable
    global = 10;    // Local variable is updated
    cout << global << endl;
    printNumber(); // This will print global variable
    return 0;

    
}