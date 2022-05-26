/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int> h,t;
    int i,a;
    for(i=0;i<n;i++)
    {
        cin>>a;
        h.pb(a);
    }
    for(i=0;i<m;i++)
    {
        cin>>a;
        t.pb(a);
    }
    sort(h.begin(),h.end());
    for(i=0;i<m;i++)
    {
        int l=0,r=n-1,ans=-1;
        while(l<=r)
        {
            int a=l+(r-l)/2;
            if(t[i]>=h[a])
            {
                ans=max(ans,h[a]);
                l=a+1;
            }
            else{
                r=a-1;
            }
        }
        auto pos=find(h.begin(),h.end(),ans);
        if(pos!=h.end())
        {
            h.erase(pos);
            n--;
        }
        cout<<ans<<'\n';

    }
}*/
#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    multiset<int,greater<int>> tickets;
    multiset<int,greater<int>>::iterator lb,it;
    int i;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        tickets.insert(x);
    }
    for(i=0;i<m;i++)
    {
        int x;
        cin>>x;
        lb=tickets.lower_bound(x);
        if(lb==tickets.end())cout<<"-1\n";
        else{
            cout<<*lb<<'\n';
            tickets.erase(lb);
        }
    }
}