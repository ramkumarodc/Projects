//string::npos
//std::out_of_range
#include<iostream>
#include<cstring>
using namespace std;

void func1()
{
    string s1 = "Hello world!";
    try
    {
        cout << s1.substr(15, 3) << endl;
    }
    catch(const std::out_of_range& e)
    {
            std::cerr << e.what() << '\n';
    }
}