#include <iostream>
using namespace std;

void myFunction()
{
    cout << "...and thats my string";
}
void myBefore()
{
    cout << "Here is what I recommend: \n";
}
int main()

{
    myBefore();

    string cars[4] = {"Ford", "Chevrolet", "Dodge", "Jeep"};
    cars[0] = "Lincoln";
    cout << cars[0];

    myFunction();
    return 0;
}