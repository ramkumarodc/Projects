#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}

int subtract(int a, int b)
{
    return a-b;
}

typedef int (*fp)(int ,int);

int func(int a, int b, fp op)
{
    int c = op(a,b);
    return c;
}


fp func1(int type)
{
    if (type==1)
        return add;
    else 
        return subtract;
}

int main()
{
    //int (*functionpointer)(int,int);
    // functionpointer= add;
    // cout<<functionpointer(5,4)<<endl;
    // functionpointer = substract;
    //cout<<functionpointer(7,5)<<endl;
    cout<<func(5,6, func1(1))<<endl;
    cout<<func(5,3, func1(2))<<endl;
    return 0;
}

// Define the register_method function template
template<class Method, typename Type1, typename Type2>
void register_method(bool (Method::*method)(Type1&, Type2&)) {
    // Create an instance of Method
    Method obj;
    
    // Create dummy parameters for demonstration
    Type1 param1;
    Type2 param2;
    
    // Invoke myMethod on the instance of Method
    bool result = (obj.*method)(param1, param2);
    
    // Print the result (for demonstration)
    std::cout << "Result of myMethod: " << result << std::endl;
}

class MyClass {
public:
    bool myMethod(int& param1, double& param2) {
        // Implementation here
        return true;
    }
};

int main() {
    // Call register_method with a pointer to MyClass::myMethod
    register_method(&MyClass::myMethod);

    return 0;
}
