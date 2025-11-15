#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
    int x=10; int y=20;
    auto add =[](int a, int b) 
    {
        return a+b;
    };
    cout<<add(2,3)<<endl;

    auto addX = [x](int a)
    {
        return a+x;
    };
    cout<<addX(6)<<endl;

    auto incrementy = [&y]()
    {
        y++;
    };
    incrementy();
    cout<<y<<endl;

    auto sum = [=]()
    {
        return x+y;
    };
    cout<<sum()<<endl;

    auto incrementAll = [&]()
    {
        x++;
        y++;
    };
    incrementAll();
    cout<<"x="<<x<<" y="<<y<<endl;

    auto modifyX= [x]() mutable
    {
        x++;
        cout<<x<<endl;
    };
    modifyX();
    cout<<x<<endl;


    auto sayhello =[](){
        cout<<"Say hello!"<<endl;
    };
    sayhello();


    vector<int> vec = { 1,2 ,3,4, 5,6};
    std::for_each(vec.begin(), vec.end(), [](int n){cout<<n<<" ";});


    auto print = [](const auto& value)
    {
        cout<<value<<endl;
    };
    print(10);
    print(3.14);
    print("hello");

    
    return 0;
}