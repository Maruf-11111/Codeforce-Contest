#include<bits/stdc++.h>
using namespace std;
int main()
{
    set <int> v;
    set <int> :: iterator it;

    int x;
    for(int i=0;i<5;i++)
    {
        cin>>x;
        v.insert(x);
    }
    for(it = v.begin();it!=v.end();it++)
    {
        cout<<*it;
    }
    cout<<endl;
    cout<<v.size();
}

