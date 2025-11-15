#include <iostream>
#include <typeinfo>
using namespace std;

#define INT_PTR int *
typedef int* intptr;

int main()
{
    INT_PTR a, b;
    intptr c, d;

    cout << "TYPE a: " << typeid(a).name() << endl;
    cout << "TYPE b: " << typeid(b).name() << endl;
    cout << "TYPE c: " << typeid(c).name() << endl;
    cout << "TYPE d: " << typeid(d).name() << endl;
    return 0;
}
