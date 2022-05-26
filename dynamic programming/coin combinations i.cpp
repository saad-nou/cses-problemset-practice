#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long n,x;
    cin>>n>>x;
    long i,j;
    vector<long> v(x+1,0);
    long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long m=1e9+7;
    v[0]=1;
    for(i=0;i<x;i++)
    {   
        for(j=0;j<n;j++)
        {
            long sum=i+a[j];
            sum%=m;
            if(sum<=x)
            (v[sum]+=v[i])%=m;
        }
    }
   cout<<v[x];
}