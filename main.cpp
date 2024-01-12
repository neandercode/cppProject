#include <iostream>
using namespace std;

void myFunction();


int main()

{
    string cars[4] = {"Ford", "Chevrolet", "Dodge", "Jeep"};
    cars[0] = "Lincoln";
    cout << cars[0];

    myFunction();
    return 0;
}

void myFunction()
{
    cout << "...and thats my string";
}