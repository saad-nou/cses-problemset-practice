#include<iostream>
#include<string>
#include<sstream>
int main()
{
    std::string s;
    std::cin>>s;
    int n=s.length();
    char c,a='G';
    int count=0,max=0;
    std::stringstream x(s);
    while(x>>c)
    {
       if(c==a)
       {
           count++;
       }
       else{
           count=1;
           a=c;
       }
       if(count>max) max=count;
    }
    std::cout<<max;
}