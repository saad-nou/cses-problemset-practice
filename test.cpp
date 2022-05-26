#include<iostream>
using namespace std;
int main()
{
    int i=10000;
    long j=10000;
    while(++j>0);
    while(++i>0);
    cout<<i-1<<":int\n"<<j-1<<":long\n";
}