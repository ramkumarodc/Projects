#include<iostream>
#include<thread>
#include<atomic>
#include<chrono>

using namespace std;

std::atomic<bool> stop(false);
void workerthread()
{
    while(!stop.load())
    {
        cout<<"working..."<<endl;
        this_thread::sleep_for(chrono::milliseconds(100));
    }
    cout<<"worker thread stopping"<<endl;
}

int main()
{
    cout<<"atomic main..."<<endl;
    thread t1(workerthread);
    this_thread::sleep_for(chrono::seconds(2));
    stop.store(true);

    t1.join();
    cout<<"Main thread ending"<<endl;

    return 0;
}