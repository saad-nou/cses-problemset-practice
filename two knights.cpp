#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long n,k;
    cin>>n;
    for(k=1;k<=n;k++)
    {
        long s=0;
        s+=k*k*(k*k-1)/2;//total no:of ways to place them
        //no:of 2x3 boxes and 3x2 boxes.knights can be placed in 2 ways in each box
        //no:of times we can shift 3x2 box (sideways*downwards)*2 
        //same for 2x3 box
        s-=2*2*(k-1)*(k-2);
        cout<<s<<'\n';
    }
        
}