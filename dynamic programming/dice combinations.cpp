#include<iostream>
using namespace std;
int main()
{
    long n;
    cin>>n;
    long i,a[n+1];
    fill(a,a+n+1,0);
    a[0]=1;
    long mod=1e9+7;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        for(long j=1;j<=6;j++)
        {
            long sum=i+j;
            if(sum<=n)a[sum]=(a[sum]+a[i])%mod;
        }
    }
    cout<<a[n];
}