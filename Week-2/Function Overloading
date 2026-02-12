#include <iostream>
using namespace std;

/* 1️ Overloading by Number of Parameters */
int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

/* 2️ Overloading by Type of Parameters */
float add(float a, float b)
{
    return a + b;
}

/* 3️ Overloading by Order of Parameters */
void display(int a, float b)
{
    cout << "Order 1 -> Integer: " << a << ", Float: " << b << endl;
}

void display(float a, int b)
{
    cout << "Order 2 -> Float: " << a << ", Integer: " << b << endl;
}

int main()
{
    // Number of parameters
    cout << "Sum of 2 integers: " << add(5, 3) << endl;
    cout << "Sum of 3 integers: " << add(5, 3, 2) << endl;

    // Type of parameters
    cout << "Sum of floats: " << add(2.5f, 3.5f) << endl;

    // Order of parameters
    display(10, 4.5f);
    display(6.7f, 20);

    return 0;
}

/*
Time Complexity: O(1)
Space Complexity: O(1)
*/
