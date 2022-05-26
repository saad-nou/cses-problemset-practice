#include<iostream>
#include<set>
#include<algorithm>
#include<array>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    /*set<array<int,2>> s;
    set<int> s1;
    int a,b;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        s.insert({a,b});
        s1.insert(a);
    }
    int ans=0;
   for(auto it:s1)
   {
       int x=0;
       for(auto i:s)
       {    
           if(it<=i[1] && it>=i[0])
            x++;
       }
       ans=max(x,ans);
   }*/
   map<int,int> m;
   int a,b;
   for(int i=0;i<n;i++)
   {
       cin>>a>>b;
       m[a]++;
       m[b]--;
   }
   int x=0,ans=0;
   for(auto i:m)
   {
       x+=i.second;
       ans=max(ans,x);
   }
    cout<<ans;
}