#include <iostream>
#include <typeinfo>
#include <utility>

template<typename T>
void showType(T&& param) {
    std::cout << "T = " << typeid(T).name() << "\n";
    std::cout << "param = " << typeid(param).name() << "\n";
}

int main() {
    int x = 42;
    const int cx = x;
    const int& rx = x;

    showType(x);              // lvalue
    showType(cx);             // const lvalue
    showType(rx);             // reference
    showType(42);             // rvalue
    showType(std::move(x));   // xvalue
}
