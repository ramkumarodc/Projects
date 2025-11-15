#include <iostream>
#include <thread>
#include <string>
#include <mutex>
#include <future>

using namespace std;

mutex m1;
void worker(string s1, promise<void> p)
{
    lock_guard<mutex> lk(m1);
    try
    {
   
    for(int i=0; i<10; i++)
	   cout << s1 << " - " << i << endl;
    s1+= " runtime Exception";
    //throw runtime_error(s1);
    p.set_value();
    }
    catch(exception &ex)
    {
        cout << " Worker caught " << s1 << endl;
        p.set_exception(current_exception());
    }
	   
}

int main()
{
    promise<void> p1;
    promise<void> p2;
    future<void> f1 = p1.get_future();
    future<void> f2 = p2.get_future();

     thread t1(worker, "thread1"s, move(p1));
     thread t2(worker, "thread2"s, move(p2));
     try
     {
        f1.get();
     }
     catch(const std::exception& e)
     {
        std::cerr <<"In Main " << e.what() << '\n';
     }

     try
     {
        f2.get();
     }
     catch(const std::exception& e)
     {
        std::cerr <<"In Main " << e.what() << '\n';
     }
     
     
     t1.join();
     t2.join();
	 return 0;
}	 