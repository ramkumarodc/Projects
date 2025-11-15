#include <iostream>
using namespace std;

class animal
{
    public:
       virtual void sound() const
       {
	    cout << "animal sound" << endl;
       }
       
       virtual void action()
       {
	    cout << "animal action" << endl;
       }

       void lives()
       {
	      cout << "animal lives in forest" << endl;
       }
       virtual ~animal()
       {
	    cout << "animal dtor" << endl;
       }


};

class Dog: public animal
{
    public:
       void sound()
       {
	    cout << "Dog sound" << endl;
       }
       void action()
       {
	    cout << "Dog action" << endl;
       }
       ~Dog()
       {
	   cout << "Dog dtor" << endl;
       }
};

int main()
{
    animal *obj = new Dog;
    obj->sound();
    obj->action();
    obj->lives();
    return 0;
} 

