#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
int mod=1e9+7;
//vector<vector<int>> dp(100001,vector<int>(101,-1));

/* top-down approach :TLE
int solve(int i,int n,int m,int a[])
{
	if(i==n) return 1;
	if(i<0) return 0;
	if(a[i]>m) return 0;
	//cout<<i<<' '<<a[i-1]<<' '<<dp[i][a[i]]<<endl;
	if(dp[i][a[i-1]]>=0 && i!=0)return dp[i][a[i-1]];
	int temp=0;
	if(a[i]!=0 && i>0 && abs(a[i]-a[i-1])<2)temp+=solve(i+1,n,m,a);
	else if(a[i]!=0 && i==0)temp+=solve(i+1,n,m,a);
	else if(a[i]==0)
	{
		for(int j=1;j<=m;j++)
		{
			a[i]=j;
			if(i==0){
				temp+=solve(i+1,n,m,a);
				temp%=mod;
			}
			else if(abs(j-a[i-1])<2){
				temp+=solve(i+1,n,m,a);
				temp%=mod;
			}
		}
		a[i]=0;
	}
	temp%=mod;
	if(i!=0)dp[i][a[i-1]]=temp;
	return temp;
}*/

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m,a[100000];
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	//cout<<solve(0,n,m,arr);
	
	vector<vector<int>> dp(n,vector<int>(m+1,0));
	dp[0][a[0]]=1;
	if(a[0]==0)dp[0]=vector<int>(m+1,1);
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i]==0 || a[i]==j)
			{
				dp[i][j]=dp[i-1][j];
				if(j!=1)dp[i][j]+=dp[i-1][j-1];
				dp[i][j]%=mod;
				if(j!=m)dp[i][j]+=dp[i-1][j+1];
				dp[i][j]%=mod;
			}
		}
	}
	int ans=0;
	for(int i=1;i<=m;i++)
	ans=(ans+dp[n-1][i])%mod;
	cout<<ans;
	
	return 0;
}
