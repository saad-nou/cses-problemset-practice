//traffic lights
#include<iostream>
#include<iterator>
#include<set>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    set<int> lights;
    multiset<int> length;
    lights.insert(x);
    lights.insert(0);
    length.insert(x);
    while(n--)
    {
        set<int>::iterator it,it2;
        int a;
        cin>>a;
        it=lights.lower_bound(a);
        it2=it;
        it2--;
        length.erase(length.find(*it-*it2));
        length.insert(*it-a);
        length.insert(a-*it2);
        lights.insert(a);
        cout<<*--length.end()<<' ';
    }
}