#include <iostream>
#include <thread>
#include <cstring>
#include <chrono>

void worker(std::string &&s )
{
    for(int i=0; i<10; i++)
    {
        std::cout<< s << "-" << i << std::endl;
    }
}
int main()
{
    std::thread t1(worker, std::move("thread1"));
    t1.detach();
    std::cout<< "main thread finished execution" << std::endl;
    return 0;
}