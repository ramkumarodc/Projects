#include<iostream>
#include<cstring>
using namespace std;

class String
{
    private:
       char *ptr;
       int len;
    public:
        String(): ptr(nullptr), len(0)
        {
            cout<<"String::String()"<<endl;
        }

        String(const char* str)
        {
            len = strlen(str);
            ptr = new char[len+1];
            strcpy(ptr, str);
        }

        String(const String& s1)
        {
           len = s1.len;
           if(len>0)
           {
                ptr = new char[len+1];
                strcpy(this->ptr, s1.ptr);
           }
        }

        String& operator=(const String& s1)
        {
            if(this != &s1)
            {
                char* tmp = this->ptr;
                int tlen = len;
                len = s1.len;
                ptr = new char[len+1];
                strcpy(ptr, s1.ptr);
                if(tlen>0)
                    delete [] tmp;
            }
            return *this;
        }

        unsigned int length()
        {
            return len;
        }

        friend ostream& operator<<(ostream& out, const String &s1)
        {
            out<<s1.ptr;
            return out;
        }
        friend istream& operator>>(istream& in, String &s1)
        {
            char temp[256];
            in>>temp;
            int len = strlen(temp);
            s1.len = len;
            s1.ptr = new char[len+1];
            strcpy(s1.ptr, temp);
            return in;
        }

        //const char* c_str() const
        char* c_str() const
        {
            return ptr;
        }

        ostream& operator<<(ostream &os) const
        {
            os<<ptr;
            return os;
        }

        istream& operator>>(istream &in) 
        {
            char * tptr = ptr;
             
            char nstr[256];
            in>>nstr;
            int nlen= strlen(nstr);
            ptr = new char[nlen+1];
            strcpy(ptr, nstr);
            len = nlen;
            delete[] tptr;
            return in;
        }

        ~String()
        {
            if(len>0)
            {
                delete [] ptr;
            }
        }

};

int main()
{
    String str1;
    String str2 = "abc";
    String str3 = str1;
    str3 = str2;
    int len = str2.length();
    cout<<str2<<endl;
    cin>>str1;
    cout<<str1<<endl;

    //Assginging str1 to str and modifying str , it changes str1 also 
    //because the the c_str function not returning const pointer
    //to avoid modifying like this add const before c_str function
    char *str = str1.c_str();
    cout<<"str: "<< str<<endl;
    strcpy(str, "def");
    cout<<"str1:" << str1<<endl;


    //another apprach for overaloading << and >>
    str1.operator>>(cin);
    str1.operator<<(cout);
    return 0;
}


//operator << >> overloading
//Move
//const
//initilizer list
//Exception handling