#include<bits/stdc++.h>
using namespace std;

int main()
{
	int mod=1e9+7;
	int t,n;
	vector<vector<int>> dp(1e6,vector<int>(8,0));
	int i,j;
	fill(dp[0].begin(),dp[0].end(),1);
	for(i=1;i<1e6;i++)
	{
		for(j=0;j<8;j++)
		{
			if(j==1||j==3||j==4||j==5||j==7)
			{
				for(int k:{1,3,4,6,7})
					dp[i][j]=(dp[i][j]+dp[i-1][k])%mod;
			}
			else
			{
				for(int k:{2,5,0})
					dp[i][j]=(dp[i][j]+dp[i-1][k])%mod;
			}
		}
	}
	/*for(i=0;i<10;i++)
	{
		cout<<'\n';
		for(j=0;j<8;j++)
			cout<<dp[i][j]<<' ';
	}*/
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<(dp[n-1][2]+dp[n-1][5])%mod<<'\n';
	}
}
