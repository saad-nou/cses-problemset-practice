#include<iostream>
int main()
{
    long n,n5;
    n5=0;
    std::cin>>n;
    long i,j;
    for(j=5;j<=n;j+=5)
    {
        i=j;
        while(i%5==0)
        {
            n5++;
            i/=5;
        }        
    }
    std::cout<<n5;
}