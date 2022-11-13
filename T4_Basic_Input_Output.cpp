#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the value the num1: "; // Insertion operator
    cin >> num1;                            // Extraction operator
    cout << "Enter the value the num2: ";
    cin >> num2;
    cout << "The sum is: " << num1 + num2;
    return 0;
}