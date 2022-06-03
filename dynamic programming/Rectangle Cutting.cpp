#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,a,b;
	cin>>a>>b;
	if(a<b)swap(a,b);
	
	vector<vector<int>> dp(a+1,vector<int>(b+1,50000));
	//for(i=1;i<=a;i++)dp[i][1]=i-1;
	//for(j=1;j<=b;j++)dp[1][j]=j-1;
	
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			if(i==j)dp[i][j]=0;
			else 
				{
					for(int k=1;k<i;k++)
						dp[i][j]=min(dp[i][j],dp[i-k][j]+dp[k][j]+1);
					for(int k=1;k<j;k++)
						dp[i][j]=min(dp[i][j],dp[i][j-k]+dp[i][k]+1);
				}
		}
	}
	
	/*for(i=0;i<=a;i++)
	{
		for(j=0;j<=b;j++)
			cout<<dp[i][j]<<' ';
		cout<<endl;
	}*/
	
	cout<<dp[a][b];
	
	return 0;
}
