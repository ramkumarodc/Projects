#include<iostream>
#include <cstring>
#include <string.h>
#include <algorithm>
#include <utility>
using namespace std;

namespace practise
{
    void strlen()
    {
         char str[] = "Ramkumar";
         cout << "strlen: " << std::strlen(str) << endl;
    }

    void strcpy()
    {
        char str[] = "hello";
        char dest[20] = {0};
        std::strcpy(dest, str);
        cout << "strcpy: " << dest << endl;
    }

    void strncpy()
    {
        //char src[] = "Ramkumar"; // this is wrong will end up in crash
        char src[20] = "ramkumar";
        char dest[] = "helloworld";
        std::strncpy(dest, src, 3);
        cout << "strncpy: " << dest << endl;
    }

    void strcat()
    {
        char str1[] = "Ram";
        char str2[] = "kumar";
        cout << std::strcat(str1, str2);
//        cout << "strcat: " << str1 << endl;

    }

    void strcmp()
    {
        char str1[] = "apple";
        char str2[] = "pineapple";
        cout << "strcmp: " << std::strcmp(str1, str2) << endl; ;
    }

    void reverse()
    {
        string str = "Ramkumar";
        std::reverse(str.begin(), str.end());
         cout << "reverse: " << str << endl;
    }

    void strtok()
    {
        char str[] = "Hello,World,from,C";
        
        char *tok = std::strtok(str, ",");
        cout<< "strtok:" << endl;
        while(tok!=NULL)
        {
            cout << "   " << tok << endl;
            tok = std::strtok(NULL, ",");
        }
    }

    void strstr()
    {
        char str1[] = "Hello,World,from,C";
        char *str2 = std::strstr(str1, "World" );
        cout << "strstr:" << str2 << endl;
    }

    void strchr()
    {
        char str1[] = "Hello,World,from,C";
        char *str2 = std::strchr(str1, ',' );
        cout << "strchr:" << str2 << endl;
    }
    void strrchr()
    {
        char str1[] = "Hello,World,from,C";
        char *str2 = std::strrchr(str1, ',' );
        cout << "strrchr:" << str2 << endl;
    }

   //checks from beginging - matches the set - returns length
    void strspn()
    {
        const char *str = "abc3224xyz";
        const char *set = "1234567890";
        size_t length = std::strspn(str+3, set);
        cout << "strspn: " << length << endl;
    }
    //checks from beginging - not matches the set - returns length
    void strcspn()
    {
        const char *str = "abcd123xyz";
        const char *set = "321";
        size_t length = std::strcspn(str, set);
        cout << "strcspn: " << length << endl;
    }
    //matches the set anywhere in the string - returns pointer
    void strpbrk()
    {
        const char *str = "abcd123xyz";
        const char *set = "321";
        cout << "strpbrk: " << std::strpbrk(str, set) << endl;
    }

    void strerror()
    {
         cout << "strerror: " << std::strerror(2) << endl;
    }

    void strtof()
    {
        const char *str = "2.71828e10more";
        char *end;
        float val = std::strtof(str, &end);
        cout << "strtof:" << endl;
        cout << "   Converted Value:" << val << endl;
        cout << "   Remainign string:" << end << endl;
    }

    void strtod()
    {
     
        char str1[]= "4324.5  4353.346";
        char *pEnd;
        double d1 = std::strtod(str1, &pEnd);
        double d2 = std::strtod(pEnd, NULL);
        cout << "strtod: d1=" << d1 << "  d2=" << d2 << endl;
    }
    
    void strtold()
    {
        const char* str = "1.23456789e300xyz";
        char *end;
        long double val = std::strtold(str, &end);
        cout << "strtold: " << str << endl;
        cout << "   converted value: " << val << endl;
        cout << "   Remaining string: " << end << endl;
    }

    void strtol()
    {
        const char *str = "12345abc";
        char *end;
        long value = std::strtol(str, &end, 10);
        cout << "strtol:" << str<< endl;
        cout << "   Converted value: " << value << endl; // Output: 12345
        cout << "   Remaining string: " << end << endl; // Output: abc
    }

    void strtoll()
    {
        const char *str = "9223372036854775807xyz"; // Max value for long long
        char *end;
        long long value = std::strtoll(str, &end, 10);
        cout << "strtoll:" << str << endl;
        cout << "   Converted value: " << value << endl; // Output: 9223372036854775807
        cout << "   Remaining string: " << end << endl; // Output: xyz
    }

    void strtoull()
    {
        const char *str = "18446744073709551615xyz"; 
        char *end;
        unsigned long long val = std::strtoull(str, &end, 10);
        cout << "strtoull:" << str << endl;
        cout << "   converted value:" << val << endl;
        cout << "   Remaining string:" << end << endl;
    }
}

int main()
{
    practise::strlen();  //std
    practise::strcpy();  //std
    practise::strncpy(); // std
    practise::strcat();  //std
    practise::strcmp();  //std
    practise::reverse();  // algorithm
    practise::strtok();  //std
    practise::strstr();  // std
    practise::strchr();  // std
    practise::strrchr(); // std
    practise::strspn();  // std
    practise::strcspn(); //std
    practise::strpbrk(); //std
    practise::strtof();  //std
    practise::strtod();  //std
    practise::strtold(); // std
    practise::strtol();  // std
    practise::strtoll();  // std
    practise::strtoull(); //std

 //transform
 //substr
    

    return 0;
}
