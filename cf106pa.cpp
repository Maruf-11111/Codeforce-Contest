#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k1,k2,w,b,whitecells, blackcells;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>k1>>k2;
        cin>>w;
        cin>>b;
        whitecells = k1 + k2;
        blackcells = 2*n - whitecells;
        if(whitecells>=2*w && blackcells >= 2*b )
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;



    }
    return 0;
}
