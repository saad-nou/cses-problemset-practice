#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    string s[n];
    for(i=0;i<n;++i)cin>>s[i];
    int a[n][n];
    memset(a,0,sizeof(a));
    a[0][0]=1;
    int m=1e9+7;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>0)
            {
                if(s[i-1][j]!='*')(a[i][j]+=a[i-1][j])%=m;
            }
            if(j>0)
            {
                if(s[i][j-1]!='*')(a[i][j]+=a[i][j-1])%=m;
            }
        }
    }
    int ans=a[n-1][n-1];
    if(s[n-1][n-1]=='*')ans=0;
    cout<<ans;
}