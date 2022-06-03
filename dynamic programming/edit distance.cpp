#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int i,j,n=s1.length(),m=s2.length();
	int dp[n+1][m+1];
	for(i=0;i<=n;i++)dp[i][0]=i;
	for(j=0;j<=m;j++)dp[0][j]=j;
	
	for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
	{
		if(s1[i-1]==s2[j-1])
			dp[i][j]=dp[i-1][j-1];
		else
			dp[i][j]=min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]))+1;
	}
	
	/*for(i=0;i<=n;i++)
	{
		cout<<'\n';
		for(j=0;j<=m;j++)
			cout<<dp[i][j]<<' ';
	}*/
	
	cout<<dp[n][m];
	
	return 0;
}
