// Mateo Nuñez
// CSCI41 Lab 1 

#include <iostream>
#include <climits>
#include <cfloat>
using namespace std;

int main() {
    //1. Operations with numbers
    cout << "Task 1" << endl;
    cout << "We are going to use the numbers 10 and 5" << endl;
    int x = 10;
    int y = 5;

    cout << "The sum of these numbers is: " << x + y << endl;
    cout << "The difference of these numbers is: " << x - y << endl;
    cout << "The product of these numbers is: " << x * y << endl;
    cout << endl;

    //2. Area of a triangle
    cout << "Task 2" << endl;
    cout << "We are going to calculate the area of a triangle" << endl;
    double base = 0;
    double height = 0;

    cout << "Type the base and the height values you'd like to use" << endl;
    cin >> base >> height;
    cout << "The area of the triangle with those values is: " << 0.5 * base * height << endl;
    cout << endl;

    //3. Size of fundamental types
    cout << "Task 3" << endl;
    cout << "We are going to show the size in bits of some fundamental data types" << endl;
    cout << "The size of int is: " << sizeof(int) << " bits" << endl;
    cout << "The size of double is: " << sizeof(double) << " bits" << endl;
    cout << "The size of char is: " << sizeof(char) << " bit" << endl;
    cout << "The size of unsigned int is: " << sizeof(unsigned int) << " bits" << endl;
    cout << "The size of bool is: " << sizeof(bool) << " bit" << endl;
    cout << endl;

    //4. Char to ASCII value
    cout << "Task 4" << endl;
    cout << "We are going to convert a char to its ASCII Value" << endl;
    char a = 0;
    cout << "Write a char" << endl;
    cin >> a;
    cout << "The ASCII Value of " << a << " is: " << int(a) << endl;
    cout << endl;

    //5. Min and max of data types
    cout << "Task 5" << endl;
    cout << "These are the following limits of some of the fundamental data types" << endl;
    cout << "The min value an int can store is " << INT_MIN << " and the max value is " << INT_MAX << endl;
    cout << "The min value a double can store is " << DBL_MIN << " and the max value is " << DBL_MAX << endl;
    cout << "The min value a char can store is " << CHAR_MIN << " and the max value is " << CHAR_MAX << endl;
    cout << "The min value an unsigned int can store is " << "0" << " and the max value is " << UINT_MAX << endl;
    cout << "The min value a long can store is " << LONG_MIN << " and the max value is " << LONG_MAX << endl;

    return 0;
}