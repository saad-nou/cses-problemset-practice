#include<vector>
#include<iostream>
#define pb push_back
using namespace std;
int main()
{
    long n;
    cin>>n;
    long tsum=n*(n+1)/2;
    if(tsum%2){
        cout<<"NO";
        return 0;
    }
    else{
        long i;
        vector<long> v1,v2;
        if(n%2==0){
            for(i=1;i<=n/2;i++)
            {
                if(i%2){
                    v1.pb(i);
                    v1.pb(n-i+1);
                }
                else{
                    v2.pb(i);
                    v2.pb(n-i+1);
                }
            }
        }
        else{
            for(i=1;i<=n/2;i++)
            {
                if(i%2){
                    v1.pb(i);
                    v1.pb(n-i);
                }
                else{
                    v2.pb(i);
                    v2.pb(n-i);
                }
            }
            v2.pb(n);
        }
        cout<<"YES\n";
        long s1=v1.size();
        long s2=v2.size();
        cout<<s2<<'\n';
        for(i=0;i<s2;i++)
        cout<<v2[i]<<' ';
        cout<<"\n"<<s1<<'\n';
        for(i=0;i<s1;i++)
        cout<<v1[i]<<' ';
    }
}