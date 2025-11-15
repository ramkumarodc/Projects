#include<iostream>
#include<string>
using namespace std;

int minwindow(string ss, int left, int len, string t)
{
    cout<< ss <<endl;
}

int main()
{
    cout<< "hello" <<endl;
    string s= "ADOBECODEBANC";
    string t= "ABC";

    string ss;
    int left, len;
    int bestlen =0;
    int bestleft =0;
    for (int i=0; i<s.size(); i++)
    {
        string ss = s.substr(0, i+1);
        minwindow(ss, left, len, t);
        if(len < bestlen)
        {
            bestlen = len;
            bestleft = left;
        }
    }
    return 0;
}