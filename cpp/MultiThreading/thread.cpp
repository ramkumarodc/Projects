#include <iostream>
#include <thread>
#include <cstring>
#include <mutex>
#include <future>


std::mutex mtx;

void worker(std::string s, std::promise<void> p )
{
    std::lock_guard<std::mutex> lk(mtx);
    try
    {
       
        for(int i=0; i<10; i++)
        {
            std::cout<< s << "-" << i << std::endl;
        }
        std::string str= s;
        str += " Exception!";
        throw std::runtime_error(str);
        
        p.set_value();
    }
    catch(const std::exception& e)
    {
        //std::lock_guard<std::mutex> lk(mtx);
        std::cerr << e.what() << '\n';
        //std::cout << " caught worker exception " << std::endl;
        p.set_exception(std::current_exception());
    }
}

int main()
{
    std::promise<void> p1, p2;
    std::future<void> f1 = p1.get_future();
    std::future<void> f2 = p2.get_future();
    std::thread t1(worker, std::string("thread1"), std::move(p1) );
    std::thread t2(worker, std::string("thread2"), std::move(p2) );
    try
    {
        f1.get();
    }
    catch(std::exception &ex)
    {
	    std::cerr << "Thread1 caught future exception:" << ex.what() << std::endl;
    }
    try
    {
        f2.get();
    }
    catch(std::exception &ex)
    {
	    std::cerr << "Thread2 caught future exception:" << ex.what() << std::endl;
    }
    t1.join();
    t2.join();

    /*  
    int val = 0;    
    std::thread t1([&] {
		    std::lock_guard<std::mutex> lk(mtx);

                    for(int i=0; i<10; i++)
 		       std::cout << "lambda in thread:" << val++ << "\n";
		       });
    std::thread t2([&] {
		    std::lock_guard<std::mutex> lk(mtx);
		    for(int i=0; i<10; i++)
		      std::cout << "second lamda thread:" <<val++ << "\n";
		      });
    */

    return 0;
}
