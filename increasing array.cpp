#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,i;
    cin>>n;
    long a[n],s;
    for(i=0;i<n;i++)
    cin>>a[i];
    s=0;
    for(i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            s+=a[i-1]-a[i];
            a[i]=a[i-1];
        }
    }
    cout<<s;
}