#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int i,j;
    vector<int> v(x+1,0);
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<x;i++)
    {   
        if(v[i] || !i)
        for(j=0;j<n;j++)
        {
            int sum=i+a[j];
            if(sum<=x)
            {
                if(!v[sum])v[sum]=v[i]+1;
                else if(v[sum]>v[i])v[sum]=v[i]+1;
            }
        }
    }
    if(v[x])cout<<v[x];
    else cout<<-1;
}