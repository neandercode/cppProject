#include <iostream>
#include <string>
using namespace std;

int main()
{
    string anime = "One Piece";
    string *ptr = &anime;

    cout << anime << "\n";

    cout << &anime << "\n";

    cout << ptr << "\n";
    return 0;
}