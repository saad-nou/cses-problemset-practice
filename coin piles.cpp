#include<iostream>
typedef long long ll;
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   long t;
   cin>>t;
   while(t--)
   {
       ll a,b;
       cin>>a>>b;
       if(a<b)
       swap(a,b);
       if(a<=2*b &&(a+b)%3==0)
       cout<<"YES\n";
       else cout<<"NO\n";
   }
}