#include <iostream>
using namespace std;

void myFunction() {
    cout << "...and thats my string";
}
int main()
{
    string cars[4] = {"Ford", "Chevrolet", "Dodge", "Jeep"};
    cars[0] = "Lincoln";
    cout << cars[0];

    myFunction();
    return 0;
}