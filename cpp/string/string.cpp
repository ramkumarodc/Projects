#include <iostream>
#include <string>
#include <typeinfo>

int main()
{

    auto s1 = "hello";
    std::cout << s1 << std::endl;
    std::cout << typeid(s1).name() << std::endl;
    std::cout << "----------------" << std::endl;

    std::string s("sample string");
    std::cout << s << std::endl;
    std::cout << typeid(s).name() << std::endl;
	
    using namespace std::literals;
    auto str1 = "world"s;
    std::cout << typeid(str1).name() << std::endl;
    std::cout << "----------------" << std::endl;

    int myInt = 5;
    double myDouble = 5.5;
    std::string myString = "Hello";

    std::cout << "Type of myInt: " << typeid(myInt).name() << std::endl;
    std::cout << "Type of myDouble: " << typeid(myDouble).name() << std::endl;
    std::cout << "Type of myString: " << typeid(myString).name() << std::endl;
    std::cout << "----------------" << std::endl;
   
    return 0;
}
