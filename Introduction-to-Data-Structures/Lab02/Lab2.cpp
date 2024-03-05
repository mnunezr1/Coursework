//Mateo Nuñez
//CSCI 41 Lab 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//Exercise 1 Functions

bool evenOrInteger1(int number) { // Function 1 with the if statement.
    bool result = true;

    if (number%2 == 0) {
        result = true;
    }
    else {
        result = false;
    }
    return result;
}

bool evenOrInteger2(int number) { // Function 2 with the tertiary Statement
    bool result = true;
    result = (number % 2 == 0) ? true : false;
    return result;
}


//Exercise 2 Functions

string numberToMonth1(int monthInNumber){ //Function 1 with if statements
    string m;
    if (monthInNumber == 1) {
        m = "January";
    }
    else if (monthInNumber == 2) {
        m = "February";
    }
    else if (monthInNumber == 3) {
        m = "March";
    }
    else if (monthInNumber == 4) {
        m = "April";
    }
    else if (monthInNumber == 5) {
        m = "May";
    }
    else if (monthInNumber == 6) {
        m = "June";
    }
    else if (monthInNumber == 7) {
        m = "July";
    }
    else if (monthInNumber == 8) {
        m = "August";
    }
    else if (monthInNumber == 9) {
        m = "September";
    }
    else if (monthInNumber == 10) {
        m = "October";
    }
    else if (monthInNumber == 11) {
        m = "November";
    }
    else if (monthInNumber == 12) {
        m = "December";
    }
    else {
        m = "That number doesn't correspond to any month";
    }
    return m;
}

string numberToMonth2(int monthInNumber) {
    string m;
    switch (monthInNumber) {
    case 1:
        m = "January";
        break;
    case 2:
        m = "February";
        break;
    case 3:
        m = "March";
        break;
    case 4:
        m = "April";
        break;
    case 5:
        m = "May";
        break;
    case 6:
        m = "June";
        break;
    case 7:
        m = "July";
        break;
    case 8:
        m = "August";
        break;
    case 9:
        m = "September";
        break;
    case 10:
        m = "October";
        break;
    case 11:
        m = "November";
        break;
    case 12:
        m = "December";
        break;
    default:
        m = "That number doesn't correspond to any month";
    }

    return m;

}

//Exercise 3 Functions

//Expression 1
double ex1Func1(int n) {    //ex3Func1 Denotes Expression 3 Function 1 -- all the functions follow the same notation
    double result = 0;
    for (int i = 1; i <= n; ++i) {
        result += static_cast<double>(i) / (i + 1); //static_cast to convert int to double
    }
    return result;
}

double ex1Func2(int n) {    
    double result = 0;
    int i = 1;
    while (i <= n) {
        result += static_cast<double>(i) / (i + 1);
        i += 1;
    }
    return result;
}

//Expression 2
unsigned long long int ex2Func1(int n) {     //long long int since the last result is really big
    unsigned long long int result = 0;
    int i = 1;
    int j = 1;
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= n; ++j) {
            result += i * j;
        }
    }
    return result;
}

unsigned long long int ex2Func2(int n) {     //long long int since the last result is really big
    unsigned long long int result = 0;
    int i = 1;
    while(i <= n) {
        int j = 1;
        while(j <= n) {
            result += i * j;
            j = j + 1;
        }
        i = i + 1;
    }
    return result;
}

//Expression 3
double ex3Func1(int n) {
    double result = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int k = 1; k <= n; ++k) {
                result += (1.0 / sqrt(i + j + k));
            }
        }
    }
    return result;
}

double ex3Func2(int n) {
    double result = 0;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            int k = 1;
            while (k <= n) {
                result += (1.0 / sqrt(i + j + k));
                k += 1;
            }
            j += 1;
        }
        i += 1;
    }
    return result;
}

//Expresion 4
int ex4Func1(int n) {
    int result = 0;
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        result = 1;                     //We initialize the result to 1 since we are using *= and if 0 the multiplication will become 0
        sum += i;
        for (int j = 1; j <= n; ++j) {
            result *= (j * sum);
        }        
    }
    return result;
}

int ex4Func2(int n) {
    int result = 0;
    int sum = 0;
    int i = 1;
    while (i <= n){
        result = 1;                     //We initialize the result to 1 since we are using *= and if 0 the multiplication will become 0
        sum += i;
        int j = 1;
        while (j <= n) {
            result *= (j * sum);
            j += 1;
        }
        i += 1;
    }
    return result;
}

//Expression 5
int ex5Func1(int n) {
    int result = 0;
    for (int i = 1; i <= n; ++i) {
        result += i;
    }
    if (result % 2 == 1) {
        result = 4;
    }
    else {
        result = 9;
    }
    return result;
}

int ex5Func2(int n) {
    int result = 0;
    int i = 1;
    while (i <= n) {
        result += i;
        i += 1;
    }
    if (result % 2 == 1) {  //If the result is even the function prints 4
        result = 4;
    }
    else {
        result = 9;
    }
    return result;
}

//f(i) function used for expressions 6 and 7
int f(int i) {  //it expresses f(i) = i
    return i;
}

//Expression 6
int ex6Func1(int n) {
    int result = 0;
    for (int i = 1; i <= n; ++i) {
        result += f(i);             //f(i) is called
    }
    return result;
}

int ex6Func2(int n) {
    int result = 0;
    int i = 1;
    while (i <= n) {
        result += f(i);             //f(i) is called
        i += 1;
    }
    return result;
}

//Expression 7
unsigned long long int ex7Func1(int n) {
    unsigned long long int result = 1;                 //result initialized with 1 to avoid multipication by 0 in *= operation
    for (int i = 1; i <= n; ++i) {
        result *= f(i);             //f(i) is called
    }
    return result;
}

unsigned long long int ex7Func2(int n) {
    unsigned long long int result = 1;                 //result initialized with 1 to avoid multipication by 0 in *= operation
    int i = 1;
    while (i <= n) {
        result *= f(i);             //f(i) is called
        i += 1;
    }
    return result;
}

//Expression 8

double ex8Func1(int n, int m) {
    double product = 1;                     //product initialized with 1 to avoid 0 multiplication in *=
    double result = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            product *= (sqrt(i) * pow(j,2));
        }
        result += product;
        product = 1;
    }
    return result;
}

double ex8Func2(int n, int m) {
    double product = 1;             //product initialized with 1 to avoid 0 multiplication result in *=
    double result = 0;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= m) {
            product *= (sqrt(i) * pow(j, 2));
            j += 1;
        }
        result += product;
        product = 1;
        i += 1;
    }
    return result;
}

//Expression 9

double ex9Func1(int a, int n) {
    int result = 0;
    for (int i = 1; i <= n; ++i) {
        result += (a * pow(i, 2));
    }
    return sqrt(result);
}

double ex9Func2(int a, int n) {
    int result = 0;
    int i = 1;
    while (i <= n) {
        result += (a * pow(i, 2));
        i += 1;
    }
    return sqrt(result);
}


int main(){
    int number1Ex1 = 0;
    int number2Ex1 = 0;
    int monthInNumber = 0;
    string month = numberToMonth1(monthInNumber);
    int n = 0;
    int m = 0;      //Used in Exercise 3 Expression 8
    int a = 0;      //Used in Exercise 3 Expression 9

    //Exercise 1 Console
    cout << "Exercise 1" << endl;
    cout << "If a number is odd it will return false, if even, it will return true" << endl;
    cout << endl;

    cout << "(Using function 1 with an if/else statement)" << endl;
    cout << "Enter a number: ";
    cin >> number1Ex1;
    cout << boolalpha << evenOrInteger1(number1Ex1) << endl; //boolalpha converts bool result into string to display
    cout << endl;

    cout << "(Using function 2 with a tertiary statement)" << endl;
    cout << "Enter a number: ";
    cin >> number2Ex1;
    cout << boolalpha << evenOrInteger2(number2Ex1) << endl; //boolalpha converts bool result into string to display
    cout << endl;

    //Exercise 2 Console
    cout << "Exercise 2" << endl;
    cout << "We'll convert the number of a month into words" << endl;
    cout << endl;

    cout << "(Using function 1 with if statements)" << endl;
    cout << "Introduce a number between 1 and 12 to see which month it corresponds to : ";
    cin >> monthInNumber;
    month = numberToMonth1(monthInNumber);
    cout << "The number " << monthInNumber << " corresponds to: " << month << endl;
    cout << endl;

    cout << "(Using function 2 with switch/case statements)" << endl;
    cout << "Now introduce another number: ";
    cin >> monthInNumber;
    month = numberToMonth2(monthInNumber);
    cout << "The number " << monthInNumber << " corresponds to: " << month << endl;
    cout << endl;

    //Exercise 3 Console
    cout << "Exercise 3:" << endl;
    cout << "Some Math expressions will be computed (See lab instructions sheet) for n = 10, 100, and 1000" << endl;
    cout << endl;

    //Expression 1 Console
    cout << "Expression 1:" << endl;
    cout << "(With a for loop)" << endl;
    n = 10;
    cout << "For n = " << n << " the result is: " << ex1Func1(n) << endl; //n has the value of 10
    n = 100;
    cout << "For n = " << n << " the result is: " << ex1Func1(n) << endl; //n has the value of 100
    n = 1000;
    cout << "For n = " << n << " the result is: " << ex1Func1(n) << endl; //n has the value of 1000
    cout << endl;

    cout << "(With a while loop)" << endl;
    n = 10;
    cout << "For n = " << n << " the result is: " << ex1Func2(n) << endl; //n has the value of 10
    n = 100;
    cout << "For n = " << n << " the result is: " << ex1Func2(n) << endl; //n has the value of 100
    n = 1000;
    cout << "For n = " << n << " the result is: " << ex1Func2(n) << endl; //n has the value of 1000
    cout << endl;

    //Expression 2 Console
    cout << "Expression 2:" << endl;
    cout << "(With a for loop)" << endl;
    n = 10;
    cout << "For n = " << n << " the result is: " << ex2Func1(n) << endl; //n has the value of 10
    n = 100;
    cout << "For n = " << n << " the result is: " << ex2Func1(n) << endl; //n has the value of 100
    n = 1000;
    cout << "For n = " << n << " the result is: " << ex2Func1(n) << endl; //n has the value of 1000
    cout << endl;

    cout << "(With a while loop)" << endl;
    n = 10;
    cout << "For n = " << n << " the result is: " << ex2Func2(n) << endl; //n has the value of 10
    n = 100;
    cout << "For n = " << n << " the result is: " << ex2Func2(n) << endl; //n has the value of 100
    n = 1000;
    cout << "For n = " << n << " the result is: " << ex2Func2(n) << endl; //n has the value of 1000
    cout << endl;

    //Expression 3 Console 

    cout << "Expression 3:" << endl;
    cout << "(With a for loop)" << endl;
    n = 10;
    cout << "For n = " << n << " the result is: " << ex3Func1(n) << endl; //n has the value of 10
    n = 100;
    cout << "For n = " << n << " the result is: " << ex3Func1(n) << endl; //n has the value of 100
    n = 1000;
    cout << "For n = " << n << " the result is: " << ex3Func1(n) << endl; //n has the value of 1000
    cout << endl;

    cout << "(With a while loop)" << endl;
    n = 10;
    cout << "For n = " << n << " the result is: " << ex3Func2(n) << endl; //n has the value of 10
    n = 100;
    cout << "For n = " << n << " the result is: " << ex3Func2(n) << endl; //n has the value of 100
    n = 1000;
    cout << "For n = " << n << " the result is: " << ex3Func2(n) << endl; //n has the value of 1000
    cout << endl;

    //Expression 4 Console

    cout << "Expression 4:" << endl;
    cout << "(With a for loop)" << endl;
    n = 10;
    cout << "For n = " << n << " the result is: " << ex4Func1(n) << endl; //n has the value of 10
    n = 100;
    cout << "For n = " << n << " the result is: " << ex4Func1(n) << endl; //n has the value of 100
    n = 1000;
    cout << "For n = " << n << " the result is: " << ex4Func1(n) << endl; //n has the value of 1000
    cout << endl;

    cout << "Unfortunately since the result is too big the console displays incorrect values in the 3 cases" << endl;
    cout << "We''ll try again with n = 2, 3, 4, 5" << endl;
    cout << endl;

    n = 2;
    cout << "For n = " << n << " the result is: " << ex4Func1(n) << endl; //n has the value of 100
    n = 3;
    cout << "For n = " << n << " the result is: " << ex4Func1(n) << endl; //n has the value of 1000
    n = 4;
    cout << "For n = " << n << " the result is: " << ex4Func1(n) << endl; //n has the value of 100
    n = 5;
    cout << "For n = " << n << " the result is: " << ex4Func1(n) << endl; //n has the value of 1000
    cout << endl;

    cout << "(With a while loop)" << endl;
    n = 10;
    cout << "For n = " << n << " the result is: " << ex4Func2(n) << endl; //n has the value of 10
    n = 100;
    cout << "For n = " << n << " the result is: " << ex4Func2(n) << endl; //n has the value of 100
    n = 1000;
    cout << "For n = " << n << " the result is: " << ex4Func2(n) << endl; //n has the value of 1000
    cout << endl;

    cout << "Unfortunately since the result is too big the console displays incorrect values in the 3 cases" << endl;
    cout << "We''ll try again with n = 2, 3, 4, 5" << endl;
    cout << endl;

    n = 2;
    cout << "For n = " << n << " the result is: " << ex4Func2(n) << endl; //n has the value of 100
    n = 3;
    cout << "For n = " << n << " the result is: " << ex4Func2(n) << endl; //n has the value of 1000
    n = 4;
    cout << "For n = " << n << " the result is: " << ex4Func2(n) << endl; //n has the value of 100
    n = 5;
    cout << "For n = " << n << " the result is: " << ex4Func2(n) << endl; //n has the value of 1000
    cout << endl;

    //Expression 5 Console

    cout << "Expression 5:" << endl;
    cout << "If the result is odd, console will print 4, otherwise it will print 9" << endl;
    cout << endl;

    cout << "(With a for loop)" << endl;
    n = 10;
    cout << "For n = " << n << " the result is: " << ex5Func1(n) << endl; //n has the value of 10
    n = 100;
    cout << "For n = " << n << " the result is: " << ex5Func1(n) << endl; //n has the value of 100
    n = 1000;
    cout << "For n = " << n << " the result is: " << ex5Func1(n) << endl; //n has the value of 1000
    cout << endl;

    cout << "(With a while loop)" << endl;
    n = 10;
    cout << "For n = " << n << " the result is: " << ex5Func2(n) << endl; //n has the value of 10
    n = 100;
    cout << "For n = " << n << " the result is: " << ex5Func2(n) << endl; //n has the value of 100
    n = 1000;
    cout << "For n = " << n << " the result is: " << ex5Func2(n) << endl; //n has the value of 1000
    cout << endl;

    //Expression 6 Console

    cout << "Expression 6:" << endl;
    cout << "(With a for loop)" << endl;
    n = 10;
    cout << "For n = " << n << " the result is: " << ex6Func1(n) << endl; //n has the value of 10
    n = 100;
    cout << "For n = " << n << " the result is: " << ex6Func1(n) << endl; //n has the value of 100
    n = 1000;
    cout << "For n = " << n << " the result is: " << ex6Func1(n) << endl; //n has the value of 1000
    cout << endl;

    cout << "(With a while loop)" << endl;
    n = 10;
    cout << "For n = " << n << " the result is: " << ex6Func2(n) << endl; //n has the value of 10
    n = 100;
    cout << "For n = " << n << " the result is: " << ex6Func2(n) << endl; //n has the value of 100
    n = 1000;
    cout << "For n = " << n << " the result is: " << ex6Func2(n) << endl; //n has the value of 1000
    cout << endl;

    //Expression 7 Console

    cout << "Expression 7:" << endl;
    cout << "(With a for loop)" << endl;
    n = 10;
    cout << "For n = " << n << " the result is: " << ex7Func1(n) << endl; //n has the value of 10
    n = 100;
    cout << "For n = " << n << " the result is: " << ex7Func1(n) << endl; //n has the value of 100
    n = 1000;
    cout << "For n = " << n << " the result is: " << ex7Func1(n) << endl; //n has the value of 1000
    cout << endl;

    cout << "Unfortunately since the result is too big the console displays the value of 0 in the 2 last cases" << endl;
    cout << endl;

    cout << "(With a while loop)" << endl;
    n = 10;
    cout << "For n = " << n << " the result is: " << ex7Func2(n) << endl; //n has the value of 10
    n = 100;
    cout << "For n = " << n << " the result is: " << ex7Func2(n) << endl; //n has the value of 100
    n = 1000;
    cout << "For n = " << n << " the result is: " << ex7Func2(n) << endl; //n has the value of 1000
    cout << endl;

    cout << "Unfortunately since the result is too big the console displays the value of 0 in the 2 last cases" << endl;
    cout << endl;

    //Expression 8 Console 

    cout << "Expression 8:" << endl;
    cout << "As this function requires 2 parameters we are going to make the examples with m = 2" << endl;
    cout << endl;

    m = 2;
    cout << "(With a for loop)" << endl;
    n = 10;
    cout << "For n = " << n << ", and m = " << m << " the result is : " << ex8Func1(n, m) << endl; //n has the value of 10
    n = 100;
    cout << "For n = " << n << ", and m = " << m << " the result is : " << ex8Func1(n, m) << endl; //n has the value of 100
    n = 1000;
    cout << "For n = " << n << ", and m = " << m << " the result is : " << ex8Func1(n, m) << endl; //n has the value of 1000
    cout << endl;

    cout << "(With a while loop)" << endl;
    n = 10;
    cout << "For n = " << n << ", and m = " << m << " the result is : " << ex8Func2(n, m) << endl; //n has the value of 10
    n = 100;
    cout << "For n = " << n << ", and m = " << m << " the result is : " << ex8Func2(n, m) << endl; //n has the value of 100
    n = 1000;
    cout << "For n = " << n << ", and m = " << m << " the result is : " << ex8Func2(n, m) << endl; //n has the value of 1000
    cout << endl;

    //Expression 9 Console

    cout << "Expression 9:" << endl;
    cout << "As this function requires 2 parameters we are going to make the examples with a = 2" << endl;
    cout << endl;

    a = 2;
    cout << "(With a for loop)" << endl;
    n = 10;
    cout << "For n = " << n << ", and m = " << m << " the result is : " << ex9Func1(a, n) << endl; //n has the value of 10
    n = 100;
    cout << "For n = " << n << ", and m = " << m << " the result is : " << ex9Func1(a, n) << endl; //n has the value of 100
    n = 1000;
    cout << "For n = " << n << ", and m = " << m << " the result is : " << ex9Func1(a, n) << endl; //n has the value of 1000
    cout << endl;

    cout << "(With a while loop)" << endl;
    n = 10;
    cout << "For n = " << n << ", and m = " << m << " the result is : " << ex9Func2(a, n) << endl; //n has the value of 10
    n = 100;
    cout << "For n = " << n << ", and m = " << m << " the result is : " << ex9Func2(a, n) << endl; //n has the value of 100
    n = 1000;
    cout << "For n = " << n << ", and m = " << m << " the result is : " << ex9Func2(a, n) << endl; //n has the value of 1000
    cout << endl;

    return 0;
}