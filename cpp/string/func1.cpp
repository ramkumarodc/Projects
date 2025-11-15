#include <iostream>
#include <cstring>
/*
 * find
 * substr
 * data()
 * c_str()
 * strtok - C function used for tokenizing strings
 * strchr - returns a pointer to the first occurrence of the character, or nullptr if the character is not found 
 */
int main()
{
    std::string s1 = "hello";
    std::string s2 = "world";

    std::string s3 = s1+ " "+ s2;
    std::cout << s3 << std::endl;

    std::string::size_type pos = s3.find(" ");
    s1 = s3.substr(pos+1);
    s2 = s3.substr(0, pos);
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;

    std::cout << s1[0] << std::endl;
    s1[0] = 'W';
    std::cout << s1 << std::endl;

    std::cout<< std::string::npos << std::endl;
    
    std::cout << s1.data() << std::endl;
    std::cout << s2.c_str() << std::endl;


    char *p = std::strtok(s1.data(), "l");
    while(p!=0)
    {
        std::cout << p << std::endl;
	p = std::strtok(nullptr, "l");
    }


    const char* str = "Try not. Do, or do not. There is no try.";
    char target = 'T';
    const char* result = str;

    while ((result = std::strchr(result, target)) != nullptr)
    {
        std::cout << "Found '" << target
                  << "' starting at '" << result << "'\n";

        // Increment result, otherwise we'll find target at the same location
        ++result;
    }
    return 0;
}
