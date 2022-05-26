#include<iostream>
#include<vector>
#include<string>
int main()
{
    std::string s;
    std::cin>>s;
    int i,j;
    int l=s.size();
    std::vector<int> v(26,0);
    for(i=0;i<l;i++)
    v[s[i]-'A']++;
    int fl=0;
    for(i=0;i<26;i++)
    if(v[i]%2)
    fl++;
    if((l%2==0&&fl)||(l%2==1&&fl!=1))
    std::cout<<"NO SOLUTION";
    else{
        for(i=0,j=0;i<26;i++)
        while(v[i]>1)
        {
           s[j]='A'+i;
           s[l-1-j]='A'+i;
           j++;
           v[i]-=2;
        }
        for(i=0;i<26;i++)
        if(v[i]==1)
        {
            s[l/2]='A'+i;
            break;
        }
        std::cout<<s;
    }
}