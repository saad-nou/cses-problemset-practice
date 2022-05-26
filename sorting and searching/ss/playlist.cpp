//playlist
#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int k[n];
    for(i=0;i<n;++i)
    cin>>k[i];
    map<int,int> m;
    int j=0,ans=0;
    for(i=0;i<n;i++)
    {
       j=max(j,m[k[i]]);
       ans=max(ans,i-j+1);
       m[k[i]]=i+1;
    }
    cout<<ans;
}