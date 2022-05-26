#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,x,i,j;
    cin>>n>>x;
    int c[n];
    int m=1e9+7;
    for(i=0;i<n;i++)
    cin>>c[i];
    vector<vector<int>> dp(n+1,vector<int>(x+1,0));
    dp[0][0]=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=x;j++)
        {
            dp[i+1][j]=dp[i][j];
            int dif=j-c[i];
            if(dif>=0)
            {
                dp[i+1][j]+=dp[i+1][dif];
                dp[i+1][j]%=m;
            }
        }
    }
    cout<<dp[n][x]<<'\n';
}