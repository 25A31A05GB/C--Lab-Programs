#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()   // Constructor
    {
        cout << "Constructor called" << endl;
    }

    ~Demo()  // Destructor
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Demo d;

    return 0;
}
