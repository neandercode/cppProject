#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct
    {
        string brand;
        string model;
        int year;
    } myCar1, myCar2;

    myCar1.brand = "Ford";
    myCar1.model = "Fusion";
    myCar1.year = 2019;

    myCar2.brand = "Ford";
    myCar2.model = "Mustang GT";
    myCar2.year = 2024;

    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
    return 0;
}