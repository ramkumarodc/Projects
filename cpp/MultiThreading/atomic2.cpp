#include<iostream>
#include<thread>
#include<atomic>

using namespace std;

atomic<int> sum(0);

void increment()
{
    for (int i=0; i<1000000; i++)
    {
        sum++;
    }
}

int main()
{
    thread t1(increment);
    thread t2(increment);

    t1.join();
    t2.join();

    cout<<"Value: "<< sum<<endl;
    return 0;
}