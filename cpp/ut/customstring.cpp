#include<iostream>
#include <cstring>

class string
{
    private:
       char *ptr;
       int len;
    public:
       string():ptr(nullptr), len(0)
       {
           std::cout<<"string ctor"<<std::endl;
       }

       string(const char * str)
       {
           if(str)
           {
	      len = strlen(str);
              ptr = new char[len+1];
	      strcpy(ptr, str);
           }
           else
           {
               str = nullptr;
               len =0;
           }
       }
       ~string()
       {
	    if(ptr)
	    {
		delete [] ptr;
		ptr = nullptr;
	    }
            std::cout << "string dtor" << std::endl;
       }

       string(const string & s1)
       {
	    len = s1.length();
	    if(len >0)
            {
               ptr = new char[len+1];
 	       strcpy(ptr, s1.c_str());
            }
            else
                ptr = nullptr;      
       }
       
       int length() const
       {
           return len;
       }
       const char * c_str() const
       {
             return ptr ? ptr : "";
       }

       string& operator=(const string& s1)
       {
            if(this == &s1)
                return *this;

            delete [] ptr;
            
            len = s1.length();
            if(len>0)
            {
                ptr = new char[len];
                strcpy(ptr, s1.c_str());
            }
            else
               ptr = nullptr;

	    return *this;
       }

       friend std::ostream& operator<<(std::ostream &out , const string &s1)
       {
            if(s1.ptr)
                out << s1.c_str();
            return out;
       }

       friend std::istream& operator>>(std::istream& in, string&s1)
       {
           char buf[500];
           in >> buf;
           s1 = string(buf);
           return in;
       }

};

void print(const string& s1)
{
   std::cout << s1 << "(length:" << s1.length() << ")" << std::endl;
}

int main()
{
    string s1 = "abc";
    print(s1);

    string s2 = s1;
    print(s2);

    string s3;
    s3 = s2;
    print(s3);

    std::cout << s1 << std::endl;

    std::cin >> s1 ;
    print(s1);
    
    return 0;
}
