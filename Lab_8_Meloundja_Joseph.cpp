#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate twice the product of two integers
int doubleMultiply(int a, int b) {
    return a * b * 2;
}

// Function to calculate the sum of three floating-point numbers
double getSum(double a, double b, double c) {
    return a + b + c;
}

int main() {
    // Part 1: Perform mathematical operations on a single floating-point number
    cout << "Part 1" << endl;

    double number; // Variable to hold the user-provided number

    cout << "Enter a floating point number: ";
    cin >> number;

    cout << "The square root of " << number << " is " << sqrt(number) << endl;
    cout << number << " raised to the 4th power is " << pow(number, 4) << endl;
    cout << "The floor of " << number << " is " << floor(number) << endl << endl;

    // Part 2: Calculate twice the product of two integers
    cout << "Part 2" << endl;

    int num1, num2; // Variables to store two integers
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "Twice the product of the numbers is: " << doubleMultiply(num1, num2) << endl << endl;

    // Part 3: Calculate the sum of three floating-point numbers
    cout << "Part 3" << endl;

    double double1, double2, double3; // Variables to hold three floating-point numbers
    cout << "Enter three floating point numbers: ";
    cin >> double1 >> double2 >> double3;

    cout << "The sum of the numbers is: " << getSum(double1, double2, double3) << endl;

    return 0;
}
