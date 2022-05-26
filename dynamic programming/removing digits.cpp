#include<iostream>
using namespace std;
int main()
{
    long n;
    cin>>n;
    long i=0;
    long m=n/10;
    long a[n+1];
    fill(a,a+n+1,1e9); 
    a[0]=0;
    for(i=1;i<=n;i++)
    {
        m=i;
        while(m)
        {
            long x=m%10;
            m=m/10;
            x=max(0l,i-x);
            a[i]=min(a[i],a[x]+1);
        }
    } 
    cout<<a[n];
}