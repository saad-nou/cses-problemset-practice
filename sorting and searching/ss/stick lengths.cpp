#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
    int n,i;
    cin>>n;
    ll a[n];
    ll ans=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        ans+=llabs(a[i]-a[n/2]);
    }
    cout<<ans;
}