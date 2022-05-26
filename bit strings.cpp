#include<iostream>
#include<cmath>
int main()
{
    long n; 
    std::cin>>n;
    long m=pow(10,9)+7;
    long ans,i;
    ans=1;
    for(i=1;i<=n;i++)
    {
        ans*=2;
        ans=ans%m;
    }
    std::cout<<ans;
}