#include<iostream>
using namespace std;

int main()
{
    int x =5;
    int *ptr = &x;

    cout<< *ptr << endl;

    int &ref = x;
    cout << ref <<endl;

    cout << ptr << endl;    
    cout << &ref << endl;
    int &ref2 = *ptr;
    cout << &ref2  << endl;
    return 0;
}