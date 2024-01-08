#include <iostream>
using namespace std;
int main()
{
    string cars[4] = {"Ford", "Chevrolet", "Dodge", "Jeep"};
    cars[0] = "Lincoln";
    cout << cars[0];
    return 0;
}