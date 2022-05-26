#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long y,x;
        cin>>y>>x;
        long m=max(x,y);
        if(m==1){
            cout<<1<<'\n';
            continue;
        }
        
            long n;
            n=(m-1)*(m-1);
            if(y>x){
               if(y%2==1)n+=x;
               else{
                   n+=2*y-x;
               }
            }
            else{
                if(x%2==0)n+=y;
                else{
                   n+=2*x-y;
                }
            }
            cout<<n<<'\n';
              
    }
}