#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void transform1()
{
    //Unary operation
    std::string input = "hello world";
    std::string output;

    // Resize output to match input
    output.resize(input.size());

    // Apply transform: Convert each character to uppercase
    std::transform(input.begin(), input.end(), output.begin(), ::toupper);

    std::cout << "Original string: " << input << std::endl;
    std::cout << "Transformed string: " << output << std::endl;
}

void transform2()
{
    std::vector<int> vec1 = {1, 3, 3, 4};
    std::vector<int> vec2 = {5, 6, 7, 9, 7};
    std::vector<int> result(vec1.size());

    // Apply transform: Add corresponding elements
    std::transform(vec1.begin(), vec1.end(), vec2.begin(), result.begin(),
                   [](int a, int b) { return a + b; });

    std::cout << "Result of addition: ";
    for (int value : result) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}

void t1()
{
    string str ="hello";
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<< str << endl;
}

void t2()
{
    vector<int> v1={1,2,3,4};
    vector<int> v2={6,9,7,8};
    vector<int> v3(v1.size());

    std::transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), std::plus<>());
    for(int ele: v3)
        cout << ele <<" ";
    cout << endl;
}
int main()
{
    transform1();
    transform2();
    return 0;
}
