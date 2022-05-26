#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    long ans=0;
    long x;
    cin>>ans;
    long temp=ans;
    for(i=1;i<n;i++)
    {
        cin>>x;
        temp=max(x,temp+x);
        ans=max(ans,temp);
    }
    cout<<ans;
}