#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int m,n,k;
    cin>>n>>m>>k;
    int i=0,j=0;
    int a[n],b[m];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<m;i++)
    cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    int c=0;
    i=0;j=0;
    while(i<n&&j<m)
    {
        if(abs(a[i]-b[j])<=k)
        {
            c++;
            i++;
            j++;
        }
        else if(a[i]<b[j])
        i++;
        else j++;
    }
    cout<<c;
}