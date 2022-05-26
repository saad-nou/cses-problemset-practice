#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    if(n==1)cout<<1;
    else if(n<4)cout<<"NO SOLUTION";
    else if(n%2==0)
    for(i=n/2+1;i<=n;i++)
    {
        cout<<i<<' '<<i-n/2<<' ';
    }
    else {
        for(i=n/2+1;i<n;i++)
        cout<<i<<' '<<i-n/2<<' ';
        cout<<i;
    }
}