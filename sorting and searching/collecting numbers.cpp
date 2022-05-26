// collecting numbers
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,count=1;
    int x[n];
    for(i=0;i<n;i++)
    {
        int a;
        cin>>a;
        x[a-1]=i;
    }
    for(i=1;i<n;i++)
    if(x[i]<x[i-1])++count;
    cout<<count;
}