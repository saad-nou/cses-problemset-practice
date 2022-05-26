#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int i,count=1;
    int x[n],a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        x[a[i]-1]=i;
    }
    for(i=1;i<n;i++)
    if(x[i]<x[i-1])++count;
    while(m--)
    {
        int l,r;
        cin>>l>>r;
        --l;--r;
        int c=a[l]-1,d=a[r]-1;
        set<pair<int,int>> s;
        if(c>0)s.insert(make_pair(c,c-1));
        if(d<n-1)s.insert({d+1,d});
        s.insert({c+1,c});
        s.insert({d,d-1});
        for(auto pa:s)
        if(x[pa.first]<x[pa.second])--count;
        swap(a[l],a[r]);
        swap(x[c],x[d]);
        for(auto pa:s)
        if(x[pa.first]<x[pa.second])++count;
        cout<<count<<'\n';
    }
}