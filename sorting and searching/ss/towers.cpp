//towers
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,k[n];
    for(i=0;i<n;++i)cin>>k[i];
    vector<int> v;
    for(i=0;i<n;++i)
    {
        vector<int>::iterator it=upper_bound(v.begin(),v.end(),k[i]);
        if(it==v.end())v.push_back(k[i]);
        else *it=k[i];
    }
    cout<<v.size();
}