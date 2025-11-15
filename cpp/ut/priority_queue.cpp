#include<iostream>
#include <cstring>
#include <queue>

using namespace std;

int main()
{
    priority_queue<string> pq;
    pq.push("ram");
    pq.push("kumar");
    pq.push("hello");
    pq.push("world");

    while(!pq.empty())
    {
	    cout << pq.top() << endl;
	    pq.pop();
    }
    return 0;
}
