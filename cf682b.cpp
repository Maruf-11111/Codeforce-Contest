#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,v,x;
    set  <int> n;
    set <int> :: iterator it;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>v;
        n.clear();

        for(int j=0;j<v;j++)
        {
          cin>>x;
          n.insert(x);
        }
        cout<<n.size()<<"sdfa"<<endl;
        if(n.size()==v)
        {
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;
    }
    return 0;


}
