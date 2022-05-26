//missing coin sum
#include<iostream>
#include<cstring>
#include<algorithm>
typedef long long ll;
using namespace std;
int main()
{
    int n;
    cin>>n;
    ll i,ans=1;
    int a[n];
    for(i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n&&a[i]<=ans;i++)
    ans+=a[i];
    cout<<ans;
}