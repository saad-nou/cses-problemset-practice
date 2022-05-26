#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<bool> v(n+1,false);
    int x;
    int i;
    for(i=1;i<n;i++)
    {
        cin>>x;
        v[x]=1;
    }
    for(i=1;i<n+1;i++)
    {
        if(!v[i])
        {
            cout<<i;
            break;
        }
    }
}