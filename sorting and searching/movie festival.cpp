#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool f(pair<int,int> m1, pair<int,int> m2)
{
    if(m1.second!=m2.second)return m1.second<m2.second;
    return m1.first<m2.first;
}
int main()
{
    int n;
    cin>>n;
    int i,a,b;
    pair<int,int> m[n];
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        m[i]=make_pair(a,b);
    }
    sort(m,m+n,f);
    int ans=1;
    a=m[0].first; b=m[0].second;
    for(i=1;i<n;i++)
    {
        if(m[i].first>=b)
        {
            ans++;
            b=m[i].second;
        }
    }
    cout<<ans;
}