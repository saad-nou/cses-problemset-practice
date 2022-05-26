#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,x;
    cin>>n>>x;
    int i,p[n];
    for(i=0;i<n;i++)
    cin>>p[i];
    sort(p,p+n);
    int ans=0;
    int l=0,r=n-1;
    while(l<=r)
    {
        if(p[l]+p[r]<=x)
        {
            ans++;
            l++;
            r--;
        }
        else{
            ans++;
            r--;
        }
    }
    cout<<ans;
}