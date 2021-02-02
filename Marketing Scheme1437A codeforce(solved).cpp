#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int l,r,a;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>l>>r;
        a=l*2;
        if(a>r)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
