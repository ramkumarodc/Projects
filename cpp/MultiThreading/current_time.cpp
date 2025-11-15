#include <iostream>
#include <chrono>
#include <iomanip>
#include <ctime>

/*
std::chrono::duration_cast<std::chrono::milliseconds>: Converts the time since epoch to milliseconds.
now.time_since_epoch(): Gets the duration since the epoch (1970-01-01 00:00:00 UTC) for the current time.
% 1000: Extracts the milliseconds part from the total number of milliseconds.
std::setfill('0') << std::setw(3): Ensures that the milliseconds are always printed as three digits, padding with zeros if necessary.
*/
int main()
{
    //while(1)
    {
        auto now = std::chrono::system_clock::now();

        std::time_t now_time = std::chrono::system_clock::to_time_t(now);

        auto milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()) % 1000;

        std::cout << "Current Time: " << std::put_time(std::localtime(&now_time), "%Y/%m/%d - %H:%M:%S" ) <<"."
                  <<  std::setfill('0') <<  std::setw(3) << milliseconds.count() << std::endl;

        //std::cout<< "now: " << now; //  ERROR

        //std::cout << "milliseconds:" << milliseconds  ERROR

        //std::cout<< " time_since_epoch: " << now.time_since_epoch(); //ERROR 

        std::cout << "current time of type time_t:" << now_time << std::endl;

    }
    return 0;
}