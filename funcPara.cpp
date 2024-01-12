#include <iostream>
#include <string>
using namespace std;

void myFamily(string fname)
{
    cout << fname << " Jones\n";
}

int main()
{
    myFamily("Josh");
    myFamily("Joseph");
    myFamily("Jessica");
    return 0;
}