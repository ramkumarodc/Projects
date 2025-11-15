#include <iostream>
using namespace std;

class sample
{
   public:
      int val;


};

int main()
{
    int a = 5, b =10;

    const int *ptr = &a;
    ptr = &b;
    //*ptr = 15;
    
    int* const ptr1 = &a;
    //ptr1 = &b;
    *ptr1 = 15;


    const int &ref1 = a;
    //ref1 = 15;
    
    int const &ref2 = a;
    a = 15;


    int &ref3 = a;
    ref3 = b;
    
    cout << "a:" << a << "  b:"<< b << endl;
    cout << "ref3:" << ref3 << endl;
    ref3 = 20;
    cout << "a:" << a << "  b:"<< b << endl;


    return 0;
}
