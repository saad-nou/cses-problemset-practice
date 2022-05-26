#include<iostream>
#include<algorithm>
using namespace std;
#include<unordered_map>
int main()
{
    int n,x,i;
    cin>>n>>x;
    int j;
    array<int,2> a[n];
    for(i=0;i<n;i++)
    {
         cin>>a[i][0];
         a[i][1]=i;
    }
    i=0;j=n-1;
    sort(a,a+n);
    while(i<j)
    {
        int sum=a[i][0]+a[j][0];
        if(sum==x)
        {
            cout<<a[i][1]+1<<' '<<a[j][1]+1;
            break;
        }
        else if(sum<x)i++;
        else --j;
    }
    if(i==j)cout<<"IMPOSSIBLE";
}