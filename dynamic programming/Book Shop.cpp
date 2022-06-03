#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> maxpage(1001,vector<int>(100001,0));

/* top-down appraoch : TLE
int solve(int i,int &n,int x,vector<int> &price,vector<int> &pages)
{
	if(i==n) return 0;
	if(maxpage[i][x]>=0)return maxpage[i][x];
	int val=0;
	val=max(val,solve(i+1,n,x,price,pages));
	if(x-price[i]>=0)
	val=max(val,pages[i]+solve(i+1,n,x-price[i],price,pages));
	maxpage[i][x]=val;
	return val;
}*/

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,x;
	cin>>n>>x;
	vector<int> price(n),pages(n);
	int i,j;
	for(i=0;i<n;i++)cin>>price[i];
	for(i=0;i<n;i++)cin>>pages[i];
	//int ans=solve(0,n,x,price,pages);
	//cout<<ans;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<=x;j++)
		{
			maxpage[i+1][j]=maxpage[i][j];
			if(j>=price[i]) 
				maxpage[i+1][j]=max(maxpage[i+1][j],maxpage[i][j-price[i]]+pages[i]);
		}
	}	
	cout<<maxpage[n][x];
	/*for(i=0;i<=n;i++)
	{
		cout<<'\n';
		for(j=0;j<=x;j++)cout<<maxpage[i][j]<<' ';
	}*/
	
	return 0;
}
