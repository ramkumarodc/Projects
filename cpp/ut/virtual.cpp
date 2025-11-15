#include<iostream>
using namespace std;

class abstract
{
   public:
     virtual void func() = 0;
};

void abstract::func()
{
    cout<< "default definition for pure virtual function" << endl;
}

class derived:public abstract
{
     public:
        void func()
	{
	    cout << "derived func invoked" << endl;
	}
};

int main()
{
    abstract *obj = new derived;
    obj->func();
    return 0;
}
